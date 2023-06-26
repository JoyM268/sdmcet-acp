//Program to find lower bound of sorted array: smallest index such that arr[index] >= x
#include<stdio.h>
#define SIZE 50

void read_array(int *, int);
int lower_bound(int *, int, int);
main()
{
    int arr[SIZE], n, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int index = lower_bound(arr, n, x);    
    printf("The lower bound is %d\n", index);
}

void read_array(int *arr, int n)
{
    int i;
    for( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int lower_bound(int *arr, int n , int x)
{
    int low = 0, high = n - 1, mid, index = n;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] >= x)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return index;
}