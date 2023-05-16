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
  printf("Index\tValues\tAddress\n");
  while(i < n)
  {
    printf("arr[%d]\t%d\t%p\n",i,*ptr,ptr);
    sum += *ptr;
    ptr++;
    i++;
  }
  printf("Sum = %d\n",sum);
  printf("&arr[0] = %p\n",arr);
  printf("ptr = %p\n",ptr);
}
