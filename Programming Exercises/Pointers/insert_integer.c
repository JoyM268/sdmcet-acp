//Write a function that receives a sorted array of integers and an integer value, inserts the value in the correct space
#include<stdio.h>
#define SIZE 50

void read(int *, int);
void print(int *, int);
int search(int *, int, int);
void insert(int *, int *, int, int);
main()
{
    int ele, index, arr[SIZE], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    read(arr, n);
    printf("Enter the integer to be inserted: ");
    scanf("%d", &ele);
    printf("Array before insertion: ");
    print(arr, n);
    index = search(arr, n, ele);
    insert(arr, &n, ele, index);
    printf("Array after insertion: ");
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

int search(int *arr, int n, int ele)
{
    int low = 0, high = n - 1, mid, index = n;
    mid = (low + high)/2;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(*(arr + mid) >= ele)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return index;
}

void insert(int *arr, int *n, int ele, int index)
{
    int i;
    for(i = *n - 1; i >= index; i--)
    {
        *(arr + i + 1) = *(arr + i);
    }
    (*n)++;
    *(arr + index) = ele;
}