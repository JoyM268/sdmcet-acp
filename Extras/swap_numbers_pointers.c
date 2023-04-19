// Program to swap two numbers using call by reference
#include<stdio.h>

void swap(int *, int *);
main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  printf("\nBefore swap:\n");
  printf("a = %i and b = %i\n",a,b);
  swap(&a,&b);
  printf("\nAfter swap:\n");
  printf("a = %i and b = %i\n",a,b);
}
void swap(int *p, int *q)
{
  *p = *p + *q;
  *q = *p - *q;
  *p = *p - *q;
}