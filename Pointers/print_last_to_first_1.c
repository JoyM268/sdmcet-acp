// Program to print a array last to first using pointers
// Method 1
#include<stdio.h>

main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i;
    int *ptr = &arr[4];
    for(i = 0; i < 5; i++, ptr--)
    {
        printf("%d ", *ptr);
    }
}