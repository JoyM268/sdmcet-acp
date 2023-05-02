//Program to find the largest element using Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>

main()
{
  int n, i, largest;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  int *ptr = (int *)calloc(n, sizeof(int));
  if(ptr == NULL)
  {
    printf("Memory not available\n");
    exit(0);
  }
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",(ptr + i));
  }
  largest = *ptr;
  for(i = 1; i < n; i++)
  {
    if(largest < *(ptr + i))
    {
      largest = *(ptr +i);
    }
  }
  printf("The largest element is: %i\n",largest);
  free(ptr);
}