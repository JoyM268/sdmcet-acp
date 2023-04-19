// Program to copy one array to another using pointers
#include<stdio.h>
#define SIZE 50

void print(int *, int);
main()
{
  int org_arr[SIZE], cpy_arr[SIZE], n, i, *ptr1, *ptr2;
  ptr1 = org_arr;
  ptr2 = cpy_arr;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",(ptr1 + i));
  }
  printf("\nOriginal array: ");
  print(ptr1, n);
  for(i = 0; i < n; i++)
  {
    *(ptr2 + i) = *(ptr1 + i);
  }
  printf("\nCopied array: ");
  print(ptr2, n);
}
void print(int *ptr, int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
    printf("%i ",*(ptr + i));
  }
}