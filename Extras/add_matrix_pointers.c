// Program to add two matrix using pointers
#include<stdio.h>
#include<stdlib.h>
#define ROW 20
#define COL 20

void read_matrix(int [][COL], int, int);
main()
{
  int matrix1[ROW][COL], matrix2[ROW][COL], result[ROW][COL], m, n, p, q, i, j;
  printf("Enter the order of matrix 1: ");
  scanf("%i %i",&m,&n);
  printf("Enter the order of matrix 2: ");
  scanf("%i %i",&p,&q);
  if(m != p || n != q)
  {
    printf("Error: Matrix addition not possible\n");
    exit(0);
  }
  printf("\nEnter %i elements of matrix 1:\n",m*n);
  read_matrix(matrix1,m,n);
  printf("\nEnter %i elements of matrix 2:\n",p*q);
  read_matrix(matrix2,p,q);
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      *(*(result + i)+j) = *(*(matrix1 + i)+j) + *(*(matrix2 + i)+j);
    }
  }
  printf("\nThe resultant matrix is:\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%i ",*(*(result + i)+j));
    }
    printf("\n");
  }
}
void read_matrix(int matrix[ROW][COL], int m, int n)
{
  int i,j;
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%i",(*(matrix + i)+j));
    }
  }
}