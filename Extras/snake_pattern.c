#include<stdio.h>
#define ROW 20
#define COL 20

void read_matrix(int (*)[COL], int, int);
void print_pattern(int (*)[COL], int, int);
main()
{
    int matrix[ROW][COL], m, n;
    printf("Enter the order of matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter %d elements:\n", m*n);
    read_matrix(matrix, m, n);
    printf("The elements of matrix in snake pattern are:\n");
    print_pattern(matrix, m, n);
}

void print_pattern(int (*matrix)[COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        if(!(i % 2))
        {
            for(j = 0; j < n; j++)
            {
                printf("%d ", *(*(matrix + i) + j));
            }
        }
        else
        {
            for(j = n - 1; j >= 0; j--)
            {
                printf("%d ", *(*(matrix + i) + j));
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
            scanf("%d", (*(matrix + i) + j));
        }
    }
}