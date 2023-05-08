//Progran to add element at the end of the list
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *next;
} node;

node *insert_at_end(node *head, int data)
{
  node *ptr = (node *)malloc(sizeof(node));
  ptr -> data = data;
  ptr -> next = NULL;
  if(head == NULL)
  {
    return ptr;
  }
  else
  {
    node *temp = head;
    while(temp -> next != NULL)
    {
      temp = temp -> next;
    }
    temp -> next = ptr;
    return head;
  }
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
  int n, ele, i;
  node *head = NULL;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%d",&ele);
    head = insert_at_end(head,ele);
  }
  printf("The elements are: ");
  print_list(head);
  free_list(head);
}