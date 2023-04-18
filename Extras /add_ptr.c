// C program to add two numbers using pointers
#include<stdio.h>

main()
{
  int a, b;
  int *p, *q;
  p = &a;
  q = &b;
  printf("Enter two numbers: ");
  scanf("%i %i",p,q);
  printf("Sum = %i\n",*p + *q);
}
