//Program to implement quick sort
#include<stdio.h>
#define SIZE 50

void read_array(int *, int);
void print_array(int *, int);
void swap(int *, int *);
int partition(int *, int, int);
void quickSort(int *, int, int);
main()
{
    int arr[SIZE], n, low, high;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    low = 0;
    high = n;
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Array before swapping: ");
    print_array(arr, n);
    quickSort(arr, low, high);
    printf("\nArray after swapping: ");
    print_array(arr, n);
}

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
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

int partition(int *arr, int low, int high)
{
    int i = low, j = high, pivot = arr[low];
    while(i < j)
    {
        do
        {
            i++;
        }while(arr[i] <= pivot);
        do
        {
            j--;
        }while(arr[j] > pivot);
        if(i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high)
{
    if(low >= high)
    {
        return;
    }
    int j = partition(arr, low, high);
    quickSort(arr, low, j);
    quickSort(arr, j + 1, high);
}