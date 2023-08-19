//Write a modular c program to read marks of 'n' students and print the number of students who have obtained highest marks
#include<stdio.h>
#define SIZE 60

void readMarks(int *, int);
int computeHighest(int *, int);
int countHighest(int *, int);
main()
{
    int n, marks[SIZE], count;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    readMarks(marks, n);
    count = countHighest(marks, n);
    printf("The number of students who have obtained highest marks is %d\n", count);
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

int computeHighest(int *marks, int n)
{
    int i, highest = marks[0];
    for(i = 1; i < n; i++)
    {
        if(highest < marks[i])
        {
            highest = marks[i];           
        }
    }
    return highest;
}

int countHighest(int *marks, int n)
{
    int i, count = 0, highest = computeHighest(marks, n);
    for(i = 0; i < n; i++)
    {
        if(highest == marks[i])
        {
            count++;
        }
    }
    return count;
}