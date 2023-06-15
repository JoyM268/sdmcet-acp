
#include <stdio.h>
#include<string.h>
#define SIZE 50 

void delete_character(char *, char);
main() 
{
  char str[SIZE], ch;
  printf("Enter a input string: ");
  scanf("%s", str);
  getchar();
  printf("Enter a character to be deleted: ");
  scanf("%c", &ch);
  delete_character(str, ch);
  printf("The string after deletion of %c from string is: %s\n", ch, str);
}

void delete_character(char *str, char ch) 
{
  int i, j, len;
  len = strlen(str);
  for (i = 0; i < len; i++) 
  {
    if(str[i] == ch)
    {
      for(j = i; j <= len; j++)
      {
        str[j] = str[j + 1];
      }
      len--;
      i--;
    }
  }
}
