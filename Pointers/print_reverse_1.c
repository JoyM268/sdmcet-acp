//Modular program to print a array in reverse using pointers
//Method 1 (for exam)
#include<stdio.h>
#define SIZE 15

void read_array(int *, int);
void print_reverse(int*, int);
main()
{
    int arr[SIZE], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    read_array(arr, n);
    printf("The array in reverse is: ");
    print_reverse(arr, n);
}

void read_array(int *ptr, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        scanf("%d", (ptr + i));
    }
}

void print_reverse(int *ptr, int len)
{
    ptr = ptr + len - 1;
    len = len - 1;
    while(len >= 0)
    {
        printf("%d ", *ptr);
        ptr--;
        len--;
    }
}