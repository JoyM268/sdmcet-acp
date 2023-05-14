//Program to find the sum of all elements in a array
#include <stdio.h>
#define SIZE 50 
main()
{
  int sum = 0, i, n, arr[SIZE];
  int *ptr = arr;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  i = 0;
  while(i < n)
  {
    printf("arr[%d]\t%d\t%u\n",i,*ptr,ptr);
    sum += *ptr;
    ptr++;
    i++;
  }
  printf("Sum = %d\n",sum);
  printf("&arr[0] = %u\n",arr);
  printf("ptr = %u\n",ptr);
}