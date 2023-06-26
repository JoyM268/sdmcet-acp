//Modular program to add two matrix and print the resultant matrix using pointers
#include<stdio.h>
#include<stdlib.h>
#define ROW 15
#define COL 15

void read_matrix(int (*)[COL], int, int);
void print_matrix(int (*)[COL], int, int);
void add_matrix(int (*)[COL], int (*)[COL], int (*)[COL], int, int);
main()
{
    int m, n, p, q;
    int matrix1[ROW][COL], matrix2[ROW][COL], resultant[ROW][COL];
    printf("Enter the order of matrix 1: ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of matrix 2: ");
    scanf("%d %d", &p, &q);
    if(m != p && n != q)
    {
        printf("Matrix addition not possible\n");
        exit(0);
    }
    printf("Enter %d elements of matrix 1:\n", m*n);
    read_matrix(matrix1, m, n);
    printf("Enter %d elements of matrix 2:\n", p*q);
    read_matrix(matrix2, p, q);
    add_matrix(matrix1, matrix2, resultant, m, n);
    printf("The resultant matrix is:\n");
    print_matrix(resultant, m, n);
}

void read_matrix(int(*ptr)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", (*(ptr + i) + j));
        }
    }
}

void print_matrix(int (*ptr)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
}

void add_matrix(int (*ptr1)[COL], int (*ptr2)[COL], int (*ptr3)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            *(*(ptr3 + i) + j) = *(*(ptr1 + i) + j) + *(*(ptr2 + i) + j);
        }
    }
}
