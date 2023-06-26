//Program to find upper bound of a sorted array: the smallest index such that arr[index] > x
#include<stdio.h>
#define SIZE 50
void read_array(int *, int);
int upper_bound(int *, int, int);
main()
{
    int arr[SIZE], n, index, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    index = upper_bound(arr, n, x);
    printf("The upperbound is: %d", index);
}

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

int upper_bound(int *arr, int n, int x)
{
    int low = 0, high = n - 1, index = n, mid;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] > x)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid  + 1;
        }
    }
    return index;
}