// Program to copy string using pointer
#include<stdio.h>
#define SIZE 50

main()
{
  char org_str[SIZE], cpy_str[SIZE];
  char *org_ptr = org_str;
  char *cpy_ptr = cpy_str;
  int i, j;
  printf("Enter the input string: ");
  scanf("%[^\n]",org_ptr);
  while(*org_ptr != '\0')
  {
    *cpy_ptr++ = *org_ptr++;
  }
  *cpy_ptr = '\0';
  org_ptr = org_str;
  cpy_ptr = cpy_str;
  printf("Original string: %s\n",org_ptr);
  printf("Copied string: %s\n",cpy_ptr);
}
