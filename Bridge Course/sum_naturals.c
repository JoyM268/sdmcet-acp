// Modular pogram to print sum of n natural numbers
#include<stdio.h>

int sum_naturals(int);
main()
{
  int n, sum;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  sum = sum_naturals(n);
  printf("Sum of first %i natural numbers is %i\n",n,sum);
}
int sum_naturals(int num)
{
  int i, sum = 0;
  for(i = 1; i <= num; i++)
  {
    sum += i;
  }
  return sum;
}