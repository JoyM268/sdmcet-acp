//Program to perform linear search using recursion 
#include<stdio.h>
#define SIZE 100
int linear(int *arr, int start, int end, int key)
{
    if(arr[start] == key)
    {
        return start;
    }
    if(start == end)
    {
        return -1;
    }
    linear(arr, start + 1, end, key);
}

main()
{
    int arr[SIZE], index, n, i, key;
    printf("Enter the size of arr: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the key: ");
    scanf("%d", &key);
    index = linear(arr, 0, n - 1, key);
    if(index == -1)
    {
        printf("%d not found\n", key);
    }
    else
    {
        printf("%d found at index %d\n", key, index);
    }
}