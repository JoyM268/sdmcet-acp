#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

typedef struct list {
  int data;
  struct list *next;
} list;

list *create(int d)
{
  list *new_node = (list *) malloc(sizeof(list));
  new_node->data = d;
  new_node->next = NULL;
  return new_node;
}

list *add(int d, list *current)
{
  list *new_node = create(d);
  current->next = new_node;
  return new_node;
}

list *arrtolist(const int arr[], int n)
{
  int i;
  list *head = create(arr[0]);
  list *current = head;
  for (i = 1; i < n; i++) 
  {
    current = add(arr[i], current);
  }
  return head;
}

void print(list *head)
{
  while (head != NULL) 
  {
    printf("%i ", head->data);
    head = head->next;
  }
}

main()
{
  int arr[SIZE], n, i;
  printf("Enter the size of the array: ");
  scanf("%i", &n);
  printf("Enter %i elements in array:\n", n);
  for (i = 0; i < n; i++) 
  {
    scanf("%i", &arr[i]);
  }
  list *head = arrtolist(arr, n);
  printf("The elements in the list are: ");
  print(head);
}
