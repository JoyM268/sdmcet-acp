//Modular program to search occurrence of a character in a string
#include<stdio.h>
#define SIZE 50

int occurrence(char *, char);
main()
{
    char str[SIZE], key;
    printf("Enter a input string: ");
    scanf("%[^\n]", str);
    getchar();
    printf("Enter the element to be searched: ");
    scanf("%c", &key);
    printf("%c occurred %d times in the string\n", key, occurrence(str, key));
}

int occurrence(char *str, char ch)
{
    int count = 0;
    while(*str)
    {
        if(*str == ch)
        {
            count++;
        }
        str++;
    }
    return count;
}