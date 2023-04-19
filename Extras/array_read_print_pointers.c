// Program to input and print array elements using pointers
#include<stdio.h>
#define SIZE 50

main()
{
  int n, i, arr[SIZE], *ptr;
  ptr = arr;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",(ptr+i));
  }
  printf("The elements of the array are:\n");
  for(i = 0; i < n; i++)
  {
    printf("%i ",*(ptr+i));
  }
}