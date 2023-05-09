// Program to perform bubble sort on list
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

void swap(node *ptr1, node *ptr2)
{
  int temp;
  temp = ptr1 -> data;
  ptr1 -> data = ptr2 -> data;
  ptr2 -> data = temp;
}

void bubble(node *head, int n)
{
  int i,j;
  node* temp;
  for(i = 0; i < n; i++)
  {
    temp = head;
    for(j = 0; j < n - i - 1; j++)
    {
      if(temp -> data > temp -> next -> data)
      {
        swap(temp, temp -> next);
      }
      temp = temp -> next;
    }
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
  printf("The elements before sorting are: ");
  print_list(head);
  bubble(head, n);
  printf("\nThe elements after sorting are: ");
  print_list(head);
  free_list(head);
}