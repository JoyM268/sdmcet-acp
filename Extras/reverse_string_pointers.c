// Program to find reverse of a string using pointers
#include<stdio.h>
#define SIZE 100

main()
{
  char str[SIZE], rev[SIZE];
  char *ptr_str = str;
  char *ptr_rev = rev;
  int len;
  printf("Enter a input string: ");
  scanf("%[^\n]",ptr_str);
  for(len = 0; *(ptr_str + len) != '\0'; len++);
  while(len > 0)
  {
    len--;
    *ptr_rev++ = *(ptr_str + len);
  }
  *ptr_rev = '\0';
  ptr_rev = rev;
  printf("Reversed string: %s\n",ptr_rev);
}
