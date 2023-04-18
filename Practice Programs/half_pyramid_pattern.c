// Modular program to print half pyramid star and number pattern
// *       1
// * *     1 2
// * * *   1 2 3
// when rows = 3

#include<stdio.h>

void star_pattern(int);
void num_pattern(int);
main()
{
  int rows;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  printf("\n");
  star_pattern(rows);
  printf("\n");
  num_pattern(rows);
}
void star_pattern(int rows)
{
  int i,j;
  for(i = 1; i <= rows; i++)
  {
    for(j = 1;j <= i; j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
}
void num_pattern(int rows)
{
  int i,j;
  for(i = 1; i <= rows; i++)
  {
    for(j = 1;j <= i; j++)
    {
      printf("%i\t",j);
    }
    printf("\n");
  }
}
