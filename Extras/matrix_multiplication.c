#include<stdio.h>
#include<stdlib.h>
#define ROW 20
#define COL 20

void read_matrix(int (*matrix)[COL], int m, int n)
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

void product_matrix(int (*matrix1)[COL], int (*matrix2)[COL], int (*resultant)[COL], int m, int q, int n)
{
    int i, j, k;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            *(*(resultant + i) + j) = 0;
            for(k = 0; k < n; k++)
            {
                *(*(resultant + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
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
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

main()
{
    int matrix1[ROW][COL], matrix2[ROW][COL], resultant[ROW][COL], m, n, p, q;
    printf("Enter the order of matrix 1: ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of matrix 2: ");
    scanf("%d %d", &p, &q);
    if(n != p)
    {
        printf("Matrix multiplication not possible\n");
        exit(0);
    }
    printf("Enter the elements of matrix 1:\n");
    read_matrix(matrix1, m, n);       
    printf("Enter the elements of matrix 2:\n");
    read_matrix(matrix2, p, q);       
    product_matrix(matrix1, matrix2, resultant, m, q, n);
    printf("The resultant matrix is:\n");
    print_matrix(resultant, m, q);
}