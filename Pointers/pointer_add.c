//Program to demonstrate addition of two numbers using pointers
#include<stdio.h>

main()
{
  int a, b, *p, *q, sum;
  p = &a;
  q = &b;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  sum = *p + *q;
  printf("Sum = %i\n",sum);
}