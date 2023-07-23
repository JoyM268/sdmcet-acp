// Given an array of sorted list of integer numbers, write a function to search for a particular item, using the method of binary search. 
// And also show how this function may be used in a program. Use pointers and pointer arithmetic
#include<stdio.h>
#define SIZE 50

void read(int *, int);
int binary_search(int *, int, int);
main()
{
    int arr[SIZE], n, index, item;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    read(arr, n);
    printf("Enter the item: ");
    scanf("%d", &item);
    index = binary_search(arr, n, item);
    if(index != -1)
    {
        printf("%d found at index %d\n", item, index);
    }
    else
    {
        printf("%d not found\n", item);
    }
}

void read(int *arr, int n)
{
    int i; 
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

int binary_search(int *arr, int n, int item)
{
    int *low = arr, *high = arr + n - 1, *mid;
    while(low <= high)
    {
        mid = low + (high - low)/2;
        if(*mid == item)
        {
            return mid - arr;
        }
        else if(item > *mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}