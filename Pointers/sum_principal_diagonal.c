//Program to find the sum of principle diagonal elements using pointer
#include<stdio.h>
#define ROW 20
#define COL 20

void read(int (*arr)[COL], int m)
{
    int i,j;
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)    
        {
            scanf("%d", (*(arr+i)+j));
        }
    }
}

void computesum(int (*arr)[COL], int m)
{
    int i, j, sum = 0;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(i == j)
                sum += *(*(arr+i)+j);
        }
    }
    printf("The sum of priciple diagonal elements is %d\n",sum);
}

int main()
{
    int arr[ROW][COL], m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    if(m == n)
    {
        read(arr, m);
        computesum(arr,m);
    }
    else
        printf("It is not a square matrix\n");
    return 0;
}