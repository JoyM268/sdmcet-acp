// Program to print a array last to first using pointers
// Method 2
#include<stdio.h>

main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i;
    int *ptr = arr;
    for(i = 4; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    } 
}