//Modular program to get Transpose of a matrix
#include<stdio.h>
#define ROW 15
#define COL 15

void read_matrix(int (*)[COL], int, int);
void swap(int *, int *);
void transpose_matrix(int (*)[COL], int (*)[COL], int *, int *);
void print_matrix(int (*)[COL], int, int);
main()
{
    int matrix[ROW][COL], transpose[ROW][COL], m, n;
    printf("Enter the order of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter %d elements:\n", m*n);
    read_matrix(matrix, m, n);
    transpose_matrix(matrix, transpose, &m, &n);
    printf("The transpose of the matrix is:\n");
    print_matrix(transpose, m, n);
}

void swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

void transpose_matrix(int (*matrix)[COL], int (*transpose)[COL], int *m, int *n)
{
    int i, j;
    for(i = 0; i < *m; i++)
    {
        for(j = 0; j < *n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    swap(m, n);
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