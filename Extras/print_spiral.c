//Program to print matrix in spiral order
#include<stdio.h>
#define ROW 15
#define COL 15

void read_matrix(int (*)[COL], int, int);
void print_spiral(int (*)[COL], int, int);
main()
{
    int matrix[ROW][COL], m, n;
    printf("Enter the order of matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter %d elements:\n", m * n);
    read_matrix(matrix, m, n);
    printf("The matrix in spiral order is:\n");
    print_spiral(matrix, m, n);
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

void print_spiral(int (*matrix)[COL], int m, int n)
{
    int left = 0, right = n - 1, up = 0, down = m - 1, i;
    while(left <= right && up <= down)
    {
        for(i = left; i <= right; i++)
        {
            printf("%d ", matrix[up][i]);
        }
        up++;
        for(i = up; i <= down; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;
        if(down >= up)
        {
            for(i = right; i >= left; i--)
            {
                printf("%d ", matrix[down][i]);
            }
            down--;
        }
        if(left <= right)
        {
            for(i = down; i >= up; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}