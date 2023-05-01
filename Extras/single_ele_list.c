// Program to create and print single element list
#include<stdio.h>
#include<stdlib.h>

typedef struct list{
  int data;
  struct list *next;
} list;

void print(list *);
main()
{
  int ele;
  list *head = (list *)malloc(sizeof(list));
  printf("Enter a element: ");
  scanf("%i", &ele);
  head -> data = ele;
  head -> next = NULL;
  printf("The single element is: ");
  print(head);
  free(head);
}
void print(list *h)
{
  while(h != NULL)
  {
    printf("%i\n", h -> data);
    h = h -> next;
  }
}