//Program to find length of a string using pointers
#include<stdio.h>
#define SIZE 50 

main()
{
  char str[SIZE], *cptr;
  int length;
  printf("Enter input string: ");
  scanf("%s", str);
  cptr = str;
  while(*cptr != '\0')
  {
    printf("%c at address %p\n", *cptr, cptr);
    cptr++;
  }
  length = cptr - str;
  printf("The lenght of the sting is %d\n", length);
}