// Program to find sum of all the elements in a matrix using pointers
#include<stdio.h>
#define ROW 15
#define COL 15
main()
{
    int i, j, m, n, matrix[ROW][COL], sum = 0;\
    int (*ptr)[COL] = matrix;
    printf("Enter the order of matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter %d elements:\n",m*n);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", (*(ptr + i) + j));
            sum += *(*(ptr + i) + j);
        }
    }
    printf("The Sum of all the elements in the matrix is: %d\n",sum);
}