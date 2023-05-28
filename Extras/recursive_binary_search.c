//Program to perform binary search using recurssion
#include<stdio.h>
#define SIZE 50

int binary_search(int *arr, int start, int end, int key)
{
    int mid = (start + end)/2;
    if(end < start)
    {
        return -1;
    }
    if(arr[mid] ==  key)
    {
        return mid;
    }
    else if(arr[mid] > key)
    {
        binary_search(arr, start, mid - 1, key);
    }
    else
    {
        binary_search(arr, mid + 1, end, key);
    }
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
    index = binary_search(arr, 0, n - 1, key);
    if(index == -1)
    {
        printf("%d not found\n", key);
    }
    else
    {
        printf("%d found at index %d\n", key, index);
    }
}