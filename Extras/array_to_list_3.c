#include <stdio.h>
#include<stdlib.h>
#define SIZE 50 
typedef struct list{
  int data;
  struct list *next;
} list;

list *arrtolist(int [], int);
void print(list *);
main()
{
  list *head = NULL;
  int arr[SIZE], n, i;
  printf("Enter the size of the arrray: ");
  scanf("%i",&n);
  printf("Enter the %i elements in array: ",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i", &arr[i]);
  }
  head = arrtolist(arr,n);
  printf("The elements in the list are: ");
  print(head);
}

list *arrtolist(int arr[], int n)
{
  int i;
  list *head = (list *)malloc(sizeof(list));
  head -> data = arr[0];
  head -> next = NULL;
  list *current = head;
  for(i = 1; i < n; i++)
  {
    list *node = (list *)malloc(sizeof(list));
    node -> data = arr[i];
    node -> next = NULL;
    current -> next = node;
    current = node;
  }
  return head;
}

void print(list *head)
{
  while(head != NULL)
  {
    printf("%i ",head -> data);
    head = head -> next;
  }
}
