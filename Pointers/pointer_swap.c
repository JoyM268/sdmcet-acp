// Modular program to swap two numbers using pointers
#include<stdio.h>

void swap(int *, int *);
main()
{
  int a, b;
  printf("Enter the values of a and b: ");
  scanf("%i %i",&a,&b);
  printf("Before swap: a = %i and b = %i\n",a,b);
  swap(&a,&b);
  printf("After swap: a = %i and b = %i\n",a,b);
}
void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}