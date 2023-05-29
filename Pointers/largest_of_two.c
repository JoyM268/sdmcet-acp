//Modular program to find the largest of two numbers using pointers
#include<stdio.h>

void largest_num(int *a, int *b, int *largest)
{
  *largest = (*a > *b)? *a : *b;
}

main()
{
  int a, b, largest;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  largest_num(&a, &b, &largest);
  printf("Largest of two numbers is: %d", largest);
}