//Program to count prime numbers in an array and print if each element is prime or not
#include<stdio.h>
#include<math.h>
#define SIZE 50

void read_array(int *, int);
int is_prime(int);
int count_prime(int *, int);
main()
{
  int arr[SIZE], n, count;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements: ", n);
  read_array(arr, n);
  count = count_prime(arr, n);
  printf("The count of prime numbers in a array is: %d\n", count);
}

void read_array(int *arr, int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
    scanf("%d", arr + i);
  }
}

int is_prime(int num)
{
  int i;
  for(i = 2; i <= sqrt(num); i++)
  {
    if(!(num % i))
    {
      return 0;
    }
  }
  return 1;
}

int count_prime(int *arr, int n)
{
  int i, count = 0, ele;
  for(i = 0; i < n; i++)
  {
    ele = *(arr + i);
    if(is_prime(ele))
    {
      printf("%d is prime\n", ele);
      count++;
    }
    else
    {
      printf("%d is not prime\n", ele);
    }
  }
  return count;
}