// Modular program to implement linear search
#include<stdio.h>
#define SIZE 20 

int linear_search(int *, int, int);
void read_array(int *, int);
main()
{
    int arr[SIZE], n, key, index;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Enter the key element: ");
    scanf("%d", &key);
    index = linear_search(arr, n, key);
    if(index != -1)
    {
        printf("%d found at index %d\n", key, index);
    }
    else
    {
        printf("%d not found\n", key);
    }
}

int linear_search(int *arr, int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}