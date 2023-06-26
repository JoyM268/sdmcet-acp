//Program to find sum and avg of the elements of the array
#include<stdio.h>
#define SIZE 50

void read_array(int *, int);
int array_sum(int *, int);
main()
{
    int arr[SIZE], n, sum;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    sum = array_sum(arr, n);
    avg = (float)sum/n;
    printf("Sum of all the elements in the array is: %d\n", sum);
    printf("Average of all the elements in the array is: %.2f\n", avg);
}

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

int array_sum(int *arr, int n)
{
    int *start = arr, *end = arr + n - 1, sum  = 0;
    while(start <= end)
    {
        sum += *start;
        start++;
    }
    return sum;
}