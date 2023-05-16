// Modular program to read 2D array/matrix and print the corresponding address and their values
#include<stdio.h>
#define ROW 15
#define COL 15

void read_array(int (*ptr)[COL], int m, int n)
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

void print_address_value(int (*ptr)[COL], int m, int n)
{
    int i, j;
    printf("Value\tAddress\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t%d\n",*(*(ptr + i) + j), (*(ptr + i) + j));
        }
    }
}

main()
{
    int matrix[ROW][COL], m, n;
    printf("Enter the order of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter %d elements:\n", m*n);
    read_array(matrix, m, n);
    printf("\n");
    print_address_value(matrix, m, n);
}