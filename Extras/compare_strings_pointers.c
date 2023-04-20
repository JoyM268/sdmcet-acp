// Program to compare two strings using pointers
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

main()
{
  char str1[SIZE], str2[SIZE];
  int len1, len2;
  char *ptr1 = str1;
  char *ptr2 = str2;
  puts("Enter input string 1: ");
  gets(ptr1);
  puts("Enter input string 2: ");
  gets(ptr2);
  for(len1 = 0; *(ptr1 + len1) != '\0'; len1++);
  for(len2 = 0; *(ptr2 + len2) != '\0'; len2++);
  if(len1 != len2)
  {
    printf("The strings are not equal\n");
    exit(0);
  }
  while(*ptr1 != '\0')
  {
    if(*ptr1++ != *ptr2++)
    {
      printf("The strings are not equal\n");
      exit(0);
    }
  }
  printf("The strings are equal\n");
}