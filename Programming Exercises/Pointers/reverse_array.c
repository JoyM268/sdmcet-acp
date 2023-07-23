// Write a function (using a pointer parameter) that reverses the elements of a given array.
#include<stdio.h>
#define SIZE 50

void read(int *, int);
void swap(int *, int *);
void reverse(int *, int);
void print(int *, int);
main()
{
    int arr[SIZE], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    read(arr, n);
    printf("The array before reverse: ");
    print(arr, n);
    reverse(arr, n);
    printf("The array after reverse: ");
    print(arr, n);
}

void read(int *arr, int n)
{
    int i;
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
}

void print(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int *arr, int n)
{
    int *start = arr, *end = arr + n - 1;
    while(start < end)
    {
        swap(start, end);
        start++;
        end--;
    }
}