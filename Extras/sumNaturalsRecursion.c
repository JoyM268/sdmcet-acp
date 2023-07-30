//Program to find sum of first n natural numbers using recursion 
#include <stdio.h>

int sumNaturals(int n)
{
  if(n == 0)
  {
    return 0;
  }
  return n + sumNaturals(n - 1);
}

main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Sum of first %d natural numbers is: %d\n", n, sumNaturals(n));
}