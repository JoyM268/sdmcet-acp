// Modular program to find nPr and nCr of a given value of n and r
#include<stdio.h>
#include<stdlib.h>

int factorial(int);
int npr(int, int);
int ncr(int, int);
main()
{
  int n, r;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  printf("Enter the value of r: ");
  scanf("%d",&r);
  if(r > n)
  {
    printf("The value of n should be equal to or greater than r\n");
    exit(0);
  }
  printf("nPr = %d\n",npr(n,r));
  printf("nCr = %d\n",ncr(n,r));
}

int factorial(int num)
{
  int i, fact = 1;
  for(i = 2; i <= num; i++)
  {
    fact *= i;
  }
  return fact;
}

int npr(int n, int r)
{
  return factorial(n)/factorial(n-r);
}

int ncr(int n, int r)
{
  return npr(n,r)/factorial(r);
}