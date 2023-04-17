// Modular program to print pyramid star pattern
//     *       
//   * * *
// * * * * *  
// when rows = 3

#include<stdio.h>

void star_pattern(int);
main()
{
  int rows;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  printf("\n");
  star_pattern(rows);
}
void star_pattern(int rows)
{
  int i,j;
  for(i = 1; i <= rows; i++)
  {
    for(j = 1; j <= rows - i; j++)
    {
      printf(" \t");
    }
    for(j = 1;j <= 2 * i - 1; j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
}
