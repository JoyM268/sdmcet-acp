// Program to add two numbers using pointers
#include<stdio.h>

main()
{
  int num1, num2, *p, *q, sum;
  p = &num1;
  q = &num2;
  printf("Enter two numbers: ");
  scanf("%i %i",p,q);
  sum = *p + *q;
  printf("Sum = %i\n",sum);
}