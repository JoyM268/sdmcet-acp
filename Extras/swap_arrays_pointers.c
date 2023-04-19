// Program to swap two arrays using pointers
#include<stdio.h>
#define SIZE 50

void read(int *, int);
void print(int *, int);
void swap(int *, int *);
void compute(int *, int *, int, int);
main()
{
  int arr1[SIZE], arr2[SIZE], m, n;
  printf("Enter the size of array 1: ");
  scanf("%i", &m);
  printf("Enter %i elements into array 1:\n",m);
  read(arr1, m);
  printf("Enter the size of array 2: ");
  scanf("%i", &n);
  printf("Enter %i elements into array 2:\n",n);
  read(arr2, n);
  printf("\nBefore swap:\n");
  printf("Array 1: ");
  print(arr1,m);
  printf("\nArray 2: ");
  print(arr2,n);
  compute(arr1, arr2, m, n);
  printf("\nAfter swap:\n");
  printf("Array 1: ");
  print(arr1,n);
  printf("\nArray 2: ");
  print(arr2,m);
}
void read(int *ptr, int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
    scanf("%i",(ptr + i));
  }
}
void print(int *ptr, int n)
{
  int i;
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
void compute(int *ptr1, int *ptr2, int m, int n)
{
  int *end1 = ptr1 + (m - 1);
  int *end2 = ptr2 + (n - 1);
  while(ptr1 <= end1 || ptr2 <= end2)
  {
    swap(ptr1++, ptr2++);
  }
}