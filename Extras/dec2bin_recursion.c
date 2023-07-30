//Program to convert decimal to binary number using recursion
#include<stdio.h>

void dec2bin(int n)
{
  if(n == 0)
  {
    return;
  }
  dec2bin(n/2);
  printf("%d", n%2);
}

main()
{
  int n;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  printf("%d in binary is: ", n);
  dec2bin(n);
}