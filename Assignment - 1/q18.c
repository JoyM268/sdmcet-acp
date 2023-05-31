//Modular program for inserting an element at a particular position
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

void read_array(int *, int);
void print_array(int *, int);
void insert(int *, int *, int, int);

main()
{
    int arr[SIZE], n, index, ele;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Enter the element to be inserted: ");
    scanf("%d",&ele);
    printf("Enter the index: ");
    scanf("%d",&index);
    if(index > n || index < 0)
    {
        printf("Insertion not possible\n");
        exit(0);
    }
    printf("Array before insertion: ");
    print_array(arr, n);
    printf("\n");
    printf("Array after insertion: ");
    insert(arr, &n, index, ele);
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

void insert(int *arr, int *n, int index, int ele)
{
    int i;
    for(i = *n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    (*n)++;
}