//Program to implement insertion sort on a array using pointers
#include<stdio.h>
#define SIZE 50

void insertion_sort(int *, int);
void read_array(int *, int);
void print_array(int *, int);
main()
{
    int arr[SIZE], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Array before sorting: ");
    print_array(arr, n);
    printf("Array after sorting: ");
    insertion_sort(arr, n);
    print_array(arr, n);    
}

void insertion_sort(int *arr, int n)
{
    int i, j, key;
    for(i = 1; i < n; i++)
    {
        key = *(arr + i);
        j = i - 1;
        while(j >= 0 && *(arr + j) > key)
        {
            *(arr + j + 1) = *(arr + j);
            j = j - 1;
        }
        *(arr+ j + 1) = key;
    }
}

void read_array(int *arr, int n)
{
    int i; 
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

void print_array(int *arr, int n)
{
    int i; 
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}