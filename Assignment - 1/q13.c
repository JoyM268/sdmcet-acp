//Modular program to perform multiplication of two matrices
#include<stdio.h>
#include<stdlib.h>
#define ROW 15
#define COL 15

void read_matrix(int(*)[COL], int, int);
void resultant(int (*)[COL], int (*)[COL], int (*)[COL], int, int, int , int);
void print_matrix(int (*)[COL], int, int);
main()
{
    int matrix1[ROW][COL], matrix2[ROW][COL], product[ROW][COL], m, n, p, q;
    printf("Enter the order of matrix 1: ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of matrix 2: ");
    scanf("%d %d", &p, &q);
    if(n != p)
    {
        printf("Error: Matrix multiplication not possible\n");
        exit(0);
    }
    printf("Enter %d elements of matrix 1:\n", m*n);
    read_matrix(matrix1, m, n);
    printf("Enter %d elements of matrix 2:\n", p*q);
    read_matrix(matrix2, p, q);
    resultant(matrix1, matrix2, product, m, n, p, q);
    printf("The resultant matrix is:\n");
    print_matrix(product, m, q);
}

void resultant(int (*matrix1)[COL], int (*matrix2)[COL], int (*product)[COL], int m, int n, int p, int q)
{
    int i, j, k;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            product[i][j] = 0;
            for(k = 0; k < n; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void read_matrix(int (*matrix)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int (*matrix)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}