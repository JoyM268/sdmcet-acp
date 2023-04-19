// Program to search element in array using pointers
#include<stdio.h>
#define SIZE 50

int search(int *, int, int);
main()
{
  int arr[SIZE], n, i, key, *ptr, index;
  ptr = arr;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",(ptr + i));
  }
  printf("Enter the key element: ");
  scanf("%i",&key);
  index = search(ptr, n, key);
  if(index == -1)
  {
    printf("Element %i not found\n", key);
  }
  else
  {
    printf("Element %i found at %i position\n", key, index);
  }
}
int search(int *ptr, int n, int key)
{
  int i;
  for(i = 0; i < n; i++)
  {
    if(*(ptr + i) == key)
    {
      return i;
    }
  }
  return -1;
}