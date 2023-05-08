//Program to add element in front of the list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next
} node;

node *insert_at_front(node *head, int data)
{
  node *ptr = (node *)malloc(sizeof(node));
  ptr -> data = data;
  ptr -> next = head;
  head = ptr;
  return head;
}

void print_list(node *head)
{
  while(head != NULL)
  {
    printf("%d ",head -> data);
    head = head -> next;
  }
}

void free_list(node *head)
{
  node *temp;
  while(head != NULL)
  {
    temp = head;
    head = head -> next;
    free(temp);
  }
}

main()
{
  node *head = NULL;
  int i, n, ele;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter %d elemnts:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%d",&ele);
    head = insert_at_front(head,ele);
  }
  printf("The elements in the list are: ");
  print_list(head);
  free_list(head);
}