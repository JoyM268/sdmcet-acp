// Write a program using pointers to read in an array of integers and print its elements in reverse order.
#include<stdio.h>

void read(int *arr, int n)
{
    int i;
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

void print_reverse(int *arr, int n)
{
    int *end = arr + n - 1;
    printf("Elements of array in reverse are: ");
    while(arr <= end)
    {
        printf("%d ", *end);
        end--;
    }
    printf("\n");
}

main()
{
    int n, arr[50];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    read(arr, n);
    print_reverse(arr, n);
}
