//Program to find the min and max in an array using pointers
//min and max in seperate function
#include<stdio.h>
#define SIZE 50

void read(int *, int);
int min(int *, int);
int max(int *, int);

main()
{
    int arr[SIZE], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read(arr, n);
    printf("Minimum = %d\n", min(arr, n));
    printf("Maximum = %d\n", max(arr, n));
}

void read(int *a, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int min(int *a, int n)
{
    int min = a[0], i;
    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int max(int *a, int n)
{
    int max = a[0], i;
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}