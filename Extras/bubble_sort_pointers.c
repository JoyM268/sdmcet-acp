// Program to bubble sort an array using pointers
#include<stdio.h>
#define SIZE 50

void swap(int *, int *);
void sort(int *, int);
main()
{
  int arr[SIZE], i, n;
  int *ptr = arr;
  printf("Enter number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",(ptr + i));
  }
  printf("Before sorting:\n");
  for(i = 0; i < n; i++)
  {
    printf("%i ",*(ptr + i));
  }
  sort(ptr,n);
  printf("\nAfter sorting:\n");
  for(i = 0; i < n; i++)
  {
    printf("%i ",*(ptr + i));
  }
}
void swap(int *ptr1, int *ptr2)
{
  *ptr1 = *ptr1 + *ptr2;
  *ptr2 = *ptr1 - *ptr2;
  *ptr1 = *ptr1 - *ptr2;
}
void sort(int *ptr, int n)
{
  int i,j;
  for(i = 0; i < n - 1; i++)
  {
    for(j = 0; j < n - i - 1; j++)
    {
      if(*(ptr + j) > *(ptr + j +1))
      {
        swap((ptr + j),(ptr + j +1));
      }
    }
  }
}