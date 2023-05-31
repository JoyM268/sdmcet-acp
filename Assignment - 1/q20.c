//Modular program to implement bubble sort
#include<stdio.h>
#define SIZE 50

void read_array(int *, int);
void print_array(int *, int);
void swap(int *, int *);
void bubble_sort(int *, int);

main()
{
    int arr[SIZE], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Array before sorting: ");
    print_array(arr, n);
    printf("\n");
    printf("Array after sorting: ");
    bubble_sort(arr, n);
    print_array(arr, n);
}

void read_array(int *arr, int n)
{
    int i;
    for( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_array(int *arr, int n)
{
    int i; 
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
