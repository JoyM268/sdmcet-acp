//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
#include<stdio.h>
#define SIZE 50

void read_array(int *, int);
int find_index(int *, int, int);
main()
{
    int arr[SIZE], n, target, index;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Enter the target: ");
    scanf("%d", &target);
    index = find_index(arr, n, target);
    printf("Index: %d\n", index);
}

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int find_index(int *arr, int n, int target)
{
    int low = 0, high = n - 1, index = n, mid;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] >= target)
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