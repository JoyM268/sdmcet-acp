//Write a C program that uses list of integers whose size will be specified interactively at runtime and print the count of odd and even numbers in the list.
#include<stdio.h>
#include<stdlib.h>

void readList(int *, int);
void countEvenOdd(int *, int, int *, int *);
main()
{
    int size, *list, countEven = 0, countOdd = 0;
    printf("Enter the size of list: ");
    scanf("%d", &size);
    list = (int *)malloc(size * sizeof(int));
    readList(list, size);
    countEvenOdd(list, size, &countEven, &countOdd);
    printf("Count of odd numbers in the list: %d\n", countOdd);
    printf("Count of even numbers in the list: %d\n", countEven);
    free(list);
}

void readList(int *list, int size)
{
    int i;
    printf("Enter %d integers: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
}

void countEvenOdd(int *list, int size, int *countEven, int *countOdd)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(list[i] % 2)
        {
            (*countOdd)++;
        }
        else
        {
            (*countEven)++;
        }
    }
}