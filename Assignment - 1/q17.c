//Modular program to reverse the elements of an array
#include<stdio.h>
#define SIZE 50

void read_array(int *, int);
void swap(int *, int *);
void reverse(int *, int);
void print_array(int *, int);
main()
{
    int n, arr[SIZE];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Before swapping: ");
    print_array(arr, n);
    printf("\n");
    printf("After swapping: ");
    reverse(arr, n);
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

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b ;
    *b = temp;
}

void reverse(int *arr, int n)
{
    int start = 0, end = n - 1; 
    while(start < end)
    {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
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