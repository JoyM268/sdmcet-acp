// Program to find length of string using pointer
#include<stdio.h>
#define SIZE 30

main()
{
  char str[SIZE], *ptr;
  int len = 0;
  ptr = str;
  printf("Enter the input string: ");
  scanf("%[^\n]", ptr);
  for(; *(ptr + len) != '\0'; len++);
  printf("The length of the string is %i\n",len);
}