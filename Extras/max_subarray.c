//Program to find max subarray in an array
#include<stdio.h>

main()
{
    int arr[1000], n, cursum, highest, i;
    cursum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    highest = arr[0];
    for(i = 0; i < n; i++)
    {
        if(cursum < 0)
        {
            cursum = 0;
        }
        cursum += arr[i];
        if(cursum > highest)
        {
            highest = cursum;
        } 
    }
    printf("highest sum of sub array: %d\n", highest);
}