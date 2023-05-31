//Modular program to find highest and lowest element of an array
#include<stdio.h>
#define SIZE 15

void highest_lowest(int *, int, int *, int *);
void read_array(int *, int);
main()
{
    int arr[SIZE], n, lowest, highest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    highest_lowest(arr, n, &lowest, &highest);
    printf("The lowest element in the array is: %d\n", lowest);
    printf("The highest element in the array is: %d\n", highest);
}

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void highest_lowest(int *arr, int n, int *lowest, int *highest)
{
    int i;
    *lowest = *highest = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] < *lowest)
        {
            *lowest = arr[i];
        }
        if(arr[i] > *highest)
        {
            *highest = arr[i];
        }
    }
}