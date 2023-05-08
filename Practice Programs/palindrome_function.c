//Modular program to check whether the number is palindrome or not
#include<stdio.h>

int reverse(int);
int is_palindrome(int);
main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  if(is_palindrome(num))
  {
    printf("%d is a palindrome\n",num);
  }
  else
  {
    printf("%d is not a palindrome\n",num);
  }
}

int reverse(int n)
{
  int rev = 0, remainder;
  while(n != 0)
  {
    remainder = n % 10;
    rev = rev*10 + remainder;
    n = n / 10;
  }
  return rev;
}

int is_palindrome(int num)
{
  if(num == reverse(num))
  {
    return 1;
  }
  return 0;
}