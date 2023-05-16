//Modular program to read and print 2d array using pointers
#include<stdio.h>
#define ROW 15
#define COL 15

void read_2d_array(int (*ptr)[COL], int m, int n)
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

void print_2d_array(int (*ptr)[COL], int m, int n) 
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

main()
{
    int arr[ROW][COL], m, n;
    printf("Enter value of m and n: ");
    scanf("%d %d", &m, &n);
    printf("Enter %d elements:\n", m*n);
    read_2d_array(arr, m, n);
    printf("The elements in the 2D array are:\n");
    print_2d_array(arr, m, n);
}