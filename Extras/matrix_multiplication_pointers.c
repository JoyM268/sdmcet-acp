// Program to multiply two matrix using pointers
#include<stdio.h>
#include<stdlib.h>
#define ROW 15
#define COL 15

void read_matrix(int [][COL], int, int);
void print_matrix(int [][COL], int, int);
main()
{
  int matrix1[ROW][COL], matrix2[ROW][COL], product[ROW][COL], m, n, p, q;
  int i,j,k;
  printf("Enter order of matrix 1: ");
  scanf("%i %i",&m,&n);
  printf("Enter order of matrix 2: ");
  scanf("%i %i",&p,&q);
  if(n != p)
  {
    printf("Error: matrix multiplication not possible\n");
    exit(0);
  }
  printf("\nEnter %i elements of matrix 1:\n",m*n);
  read_matrix(matrix1,m,n);
  printf("\nEnter %i elements of matrix 2:\n",p*q);
  read_matrix(matrix2,p,q);
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < q; j++)
    {
      *(*(product + i)+j) = 0;
      for(k = 0; k < n; k++)
      {
        *(*(product + i)+j) += *(*(matrix1 + i)+k) * *(*(matrix2 + k)+j);
      }
    }
  }
  printf("\nThe Product of matrix is:\n");
  print_matrix(product,m,q);
}
void read_matrix(int matrix[][COL], int m, int n)
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
void print_matrix(int matrix[][COL], int m, int n)
{
  int i,j;
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%i ",*(*(matrix + i)+j));
    }
    printf("\n");
  }
}