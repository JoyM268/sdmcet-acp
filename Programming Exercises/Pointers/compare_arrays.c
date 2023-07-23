// Write a function (using pointer parameters) that compares two integer arrays of same size to see whether they are identical. The function return 1 if they are identical
// 0 otherwise
#include<stdio.h>
#define SIZE 50

void read_array(int *, int);
int isIdentical(int *, int *, int);
main()
{
    int arr1[SIZE], arr2[SIZE], n;
    printf("Enter the number of elemets: ");
    scanf("%d", &n);
    printf("Enter %d elements of array 1: ", n);
    read_array(arr1, n);
    printf("Enter %d elements of array 2: ", n);
    read_array(arr2, n);
    if(isIdentical(arr1, arr2, n))
    {
        printf("Both the arrays are identical\n");
    }
    else
    {
        printf("Arrays are not identical\n");
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

int isIdentical(int *arr1, int *arr2, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(*(arr1 + i) != *(arr2 + i))
        {
            return 0;
        }
    }
    return 1;
}