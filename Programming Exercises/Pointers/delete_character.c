/* Using pointers, write a function that receives a character string and a character as argument and deletes all occurences of this character in the string.
The function should return the corrected string with no holes. */
#include<stdio.h>
#define SIZE 50
void removeOccurences(char *, char);
main()
{
    char str[SIZE], ch;
    printf("Enter the input string: ");
    scanf("%s", str);
    getchar();
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("The string before deletion of character \"%c\": %s\n", ch, str);
    removeOccurences(str, ch);
    printf("The string after deletion of character \"%c\": %s\n", ch, str);
}

void removeOccurences(char *str, char ch)
{
    char *temp = str;
    while(*str)
    {
        if(*str != ch)
        {
            *temp = *str;
            temp++;
        }
        str++;
    }
    *temp = '\0';
}