//Program to implement bubble sort on a linked list 
#include<stdio.h>
#include<stdlib.h> 

typedef struct list 
{
  int data;
  struct list *next;
} list;

list *create(int);
list *insert(list *, int);
void swap(list *, list *);
void bubble_sort(list *);
void print(list *);
void free_list(list *);
main()
{
  list *head = NULL;
  int i, n, ele;
  srand(time(NULL));  
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i element:\n",n);
  for(i = 0; i < n; i++)  
  {
    scanf("%i",&ele);
    head = insert(head,ele);
  }
  printf("\nBefore Sorting\n");
  print(head);
  printf("\nAfter Sorting\n");
  bubble_sort(head); 
  print(head);
  free_list(head);
}

list *create(int n) 
{
  list *node = (list *)malloc(sizeof(list));
  node -> data = n;
  node -> next = NULL;
  return node;
}

list *insert(list *head, int n)  
{
  list *node = create(n);
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

void swap(list *a, list *b) 
{ 
  int temp;
  temp = a -> data;
  a -> data = b -> data;
  b -> data = temp;
}

void bubble_sort(list *head)
{
  list *start;
  list *end = NULL;
  int swapped;
  if(head == NULL) 
  {
    return;
  }
  do{
    swapped = 0;
    start = head;
    while(start -> next != end)
    {
      if(start -> data > start -> next -> data)
      {
        swap(start, start -> next);
        swapped = 1;
      }
      start = start -> next;
    }
    end = start;
  } while(swapped);
}

void print(list *head) 
{
  int i = 1;
  while(head != NULL)
  {
    printf("%i\t", head -> data);
    head = head -> next;
    if(i % 5 == 0) 
    {
      printf("\n");
    }
    i++;
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
