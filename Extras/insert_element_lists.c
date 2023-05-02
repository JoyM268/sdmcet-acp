// Program to insert elements into linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct list{
  int data;
  struct list *next;
} list;

list *insert(list *, int);
void print(list *);
void free_list(list *);

main()
{
  int n, i, ele;
  list *head = NULL;
  printf("Enter number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",&ele);
    head = insert(head, ele);
  }
  print(head);
  free_list(head);
}

list *insert(list *head, int n)
{
  list *node = (list *)malloc(sizeof(list));
  node -> data = n;
  node -> next = NULL;
  if(head == NULL)
  {
    head = node;
  }
  else
  {
    list *end = head;
    while(end -> next != NULL)
    {
      end = end -> next;
    }
    end -> next = node;
  }
  return head;
}

void print(list *head)
{
  if(head == NULL)
  {
    printf("The list is empty\n");
  }
  else
  {
    printf("The elements in the list are: ");
    while(head != NULL)
    {
      printf("%i ", head -> data);
      head = head -> next;
    }
  }
}

void free_list(list *head)
{
  list *temp;
  while(head != NULL)
  {
    temp = head;
    head = head -> next;
    free(temp);
  }
}