// Program to concatenate two strings using pointers
#include<stdio.h>
#define SIZE 50

main()
{
  char str1[2*SIZE], str2[SIZE];
  char *ptr1 = str1;
  char *ptr2 = str2;
  printf("Enter input string 1: ");
  scanf("%[^\n]",ptr1);
  getchar();
  printf("Enter input string 2: ");
  scanf("%[^\n]",ptr2);
  while(*(++ptr1) != '\0');
  while(*ptr2 != '\0')
  {
    *ptr1++ = *ptr2++;
  }
  *ptr1 = '\0';
  ptr1 = str1;
  printf("Concatenated string: %s\n",ptr1);
}