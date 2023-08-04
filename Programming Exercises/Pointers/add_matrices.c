//Write a function using pointers to add two matrices and to return the resultant matrix to the calling function
#include<stdio.h>
#include<stdlib.h>
#define ROW 15
#define COL 15

void readMatrix(int (*)[COL], int, int);
void printMatrix(int (*)[COL], int, int);
void addMatrix(int (*)[COL], int (*)[COL], int (*)[COL], int , int);
main()
{
    int matrix1[ROW][COL], matrix2[ROW][COL], resultant[ROW][COL], m, n, p, q;
    printf("Enter the order of matrix 1: ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of matrix 2: ");
    scanf("%d %d", &p, &q);
    if(m != p || n != q)
    {
        printf("Matrix additon not possible\n");
        exit(0);
    }
    printf("Enter %d elements of matrix 1:\n", m*n);
    readMatrix(matrix1, m, n);
    printf("Enter %d elements of matrix 2:\n", p*q);
    readMatrix(matrix2, p, q);
    addMatrix(matrix1, matrix2, resultant, m, n);
    printf("The resultant matrix is:\n");
    printMatrix(resultant, m, n);
} 

void readMatrix(int (*matrix)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

void printMatrix(int (*matrix)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

void addMatrix(int (*matrix1)[COL], int (*matrix2)[COL], int (*resultant)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            *(*(resultant + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }
}