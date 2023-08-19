// Write a modular C program to sort the given marks of ‘n’ students in the course of C-programming using insertion sort.
#include<stdio.h>
#define SIZE 100

void readMarks(int *, int);
void sortMarks(int *, int);
void printMarks(int *, int);
main()
{
    int marks[SIZE], n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    readMarks(marks, n);
    printf("\nThe marks of the %d students before sorting:\n", n);
    printMarks(marks, n);
    sortMarks(marks, n);
    printf("\nThe marks of the %d students after sorting:\n", n);
    printMarks(marks, n);
}

void readMarks(int *marks, int n)
{
    int i;
    printf("Enter the marks of:\n");
    for(i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

void printMarks(int *marks, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d\n", marks[i]);
    }
}

void sortMarks(int *marks, int n)
{
    int i, j, key;
    for(i = 1; i < n; i++)
    {
        key = marks[i];
        j = i - 1;
        while(j >= 0 && marks[j] > key)
        {
            marks[j + 1] = marks[j];
            j--;
        }
        marks[j + 1] = key;
    }
}