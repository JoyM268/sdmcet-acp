//Modular program to check whether the number is prime or not
#include<stdio.h>
#include<math.h>

int is_prime(int);
main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  if(is_prime(num))
  {
    printf("%d is a prime number\n",num);
  }
  else
  {
    printf("%d is not a prime number\n",num);
  }
}

int is_prime(int num)
{
  int i;
  for(i = 2; i <= sqrt(num); i++)
  {
    if(num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}