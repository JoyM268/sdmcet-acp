//Modular program for Deleting the chosen element from an array
#include<stdio.h>
#define SIZE 100

void read_array(int *, int);
int find_element(int *, int, int);
int deletion(int *, int *, int);
void print_array(int *, int);
main()
{
    int arr[SIZE], n, key, found;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("Enter the element to be deleted: ");
    scanf("%d", &key);
    printf("Array before deletion: ");
    print_array(arr, n);
    found = deletion(arr, &n, key);
    if(found)
    {
        printf("Array after deletion: ");
        print_array(arr, n); 
    }
}
void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
} 

int find_element(int *arr, int n, int key)
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

int deletion(int *arr, int *n, int key)
{
    int index = find_element(arr, *n, key);
    if(index == -1)
    {
        printf("Element %d not found\n", key);
        return 0;
    }
    int i;
    for(i = index; i < *n; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Element %d deleted from the array\n", key);
    return 1;
}

void print_array(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}