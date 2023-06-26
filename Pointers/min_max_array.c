//Program to find the min and max in an array using pointers
//return min and max from same function
#include<stdio.h>
#define SIZE 50

void read(int *, int);
int get_min_max(int *, int, int *);

main()
{
    int arr[SIZE], n, min, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    read(arr, n);
    min = get_min_max(arr, n, &max);
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

void read(int *arr, int n)
{
    int i; 
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

int get_min_max(int *arr, int n, int *max)
{
    int i, min;
    *max = min = *arr;
    for(i = 1; i < n; i++)
    {
        if(*(arr + i) < min)
        {
            min = *(arr + i);
        }
        if(*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
    }
    return min;
}

