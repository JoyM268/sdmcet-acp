//Program to find nth terms of fibonacci series
#include<stdio.h>

int fibonacci(int n);
main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d term of fibonacci series is: %d\n", n, fibonacci(n));
}

int fibonacci(int n) 
{
  if (n == 0) 
  {
    return 0;
  } 
  else if (n == 1) 
  {
    return 1;
  } 
  else 
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}