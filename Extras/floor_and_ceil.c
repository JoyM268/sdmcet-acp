//find floor and ceil in a sorted array, floor: largest index such that arr[index] <= x, floor: smallest index such that arr[index] => x
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

void read_array(int *, int);
int find_floor(int *, int , int);
int find_ceil(int *, int, int);
main()
{
    int arr[SIZE], n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ",n);
    read_array(arr, n);
    printf("Enter the target: ");
    scanf("%d", &target);
    int floor = find_floor(arr, n, target);
    int ceil = find_ceil(arr, n, target);
    printf("The floor is %d\n", floor);
    printf("The ceil is  %d\n", ceil);
}

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int find_floor(int *arr, int n, int target)
{
    int low = 0, high = n - 1, mid, index = -1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] <= target)
        {
            index = mid;
            low = mid  + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return index;
}

int find_ceil(int *arr, int n, int target)
{
    int low = 0, high = n - 1, mid, index = n;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] >= target)
        {
            index = mid;
            high = mid  - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return index;
}
