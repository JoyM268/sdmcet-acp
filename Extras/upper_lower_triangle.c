// Program to find sum of upper and lower triange of a square matrix
#include<stdio.h>
#include<stdlib.h>
#define ROW 20
#define COL 20 

void sum_upper_lower(int (*)[COL], int , int *, int *);
void read_matrix(int (*)[COL], int);
main()
{
    int m, n, matrix[ROW][COL], lower_sum = 0, upper_sum = 0;
    printf("Enter the order of matrix: ");
    scanf("%d %d", &m, &n);
    if(m != n)
    {
        printf("Error: The Matrix is not a square matrix\n");
        exit(0);
    }
    printf("Enter %d elemets:\n", m*n);
    read_matrix(matrix, m);
    sum_upper_lower(matrix, m, &lower_sum, &upper_sum);
    printf("Sum of lower triangle is: %d\n", lower_sum);
    printf("Sum of upper triangle is: %d\n", upper_sum);
}
void read_matrix(int (*matrix)[COL], int p)
{
    int i, j;
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < p; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

void sum_upper_lower(int (*matrix)[COL], int p, int *lower_sum, int *upper_sum)
{
    int i, j;
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < p; j++)
        {
            if(i <= j)
            {
                *upper_sum += *(*(matrix + i) + j);
            }
            if(i >= j)
            {
                *lower_sum += *(*(matrix + i) + j);
            }
        }
    }
}