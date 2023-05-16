// Modular program to read and print 1d array using pointers
#include<stdio.h>
#define SIZE 50
void read_array(int *ptr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
}

void print_array(int *ptr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}

main()
{
    int arr[SIZE], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("The elements of the array are: ");
    print_array(arr, n);
}
