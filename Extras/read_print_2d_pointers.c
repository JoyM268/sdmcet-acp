// Program to access two dimensional array using pointers
#include <stdio.h>
#define ROW 15
#define COL 15

main()
{
  int matrix[ROW][COL],m,n,i,j;
  printf("Enter order of matrix: ");
  scanf("%i %i",&m,&n);
  printf("Enter %i elements:\n",m*n);
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%i",(*(matrix + i)+j));
    }
  }
  printf("\nThe matrix is:\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%i ",*(*(matrix + i)+j));
    }
    printf("\n");
  }
}