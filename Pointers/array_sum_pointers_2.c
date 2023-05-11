//Program to find sum of the elements in the array using pointers
#include<stdio.h>
#define SIZE 50
main()
{
  int arr[SIZE], n, i, sum = 0;
  int *ptr = arr;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%d",(ptr + i));
    sum += *(ptr + i);
  }
  printf("Sum = %d\n",sum);
}