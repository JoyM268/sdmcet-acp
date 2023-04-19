// Program to reverse an array using pointers
#include<stdio.h>
#define SIZE 50

void swap(int *, int *);
main()
{
  int *left, *right, arr[SIZE], i, n;
  printf("Enter the size of array: ");
  scanf("%i",&n);
  left = arr;
  right = arr + (n - 1);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",(left + i));
  }
  printf("\nOriginal array: ");
  for(i = 0; i < n; i++)
  {
    printf("%i ",*(left + i));
  }
  while(left < right)
  {
    swap(left, right);
    left++;
    right--;
  }
  left = arr;
  printf("\nReversed array: ");
  for(i = 0; i < n; i++)
  {
    printf("%i ",*(left + i));
  }
}
void swap(int *ptr1, int *ptr2)
{
  *ptr1 = *ptr1 + *ptr2;
  *ptr2 = *ptr1 - *ptr2;
  *ptr1 = *ptr1 - *ptr2;
}