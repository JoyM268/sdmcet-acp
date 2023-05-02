#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

typedef struct list 
{
  int data;
  struct list *next;
} list;

list *create(const int arr[], int n)
{
  int i;
  list *head = NULL;
  for (i = n - 1; i >= 0; i--) 
  {
    list *new_node = (list *) malloc(sizeof(list));
    new_node->data = arr[i];
    new_node->next = head;
    head = new_node;
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

int main()
{
  int arr[SIZE], n, i;
  printf("Enter the size of the array: ");
  scanf("%i", &n);
  printf("Enter %i elements:\n", n);
  for (i = 0; i < n; i++) 
  {
    scanf("%i", &arr[i]);
  }
  list *head = create(arr, n);
  printf("The elements in the list are: ");
  print(head);
}
