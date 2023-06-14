//Modular C program using pointers to check wheter a given string is palindrome or not
#include<stdio.h>
#include<string.h>
#define SIZE 100

int is_palindrome(char *, int);
main()
{
    char str[SIZE], len;
    printf("Enter the input string: ");
    scanf("%s", str);
    len = strlen(str);
    if(is_palindrome(str, len))
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
}

int is_palindrome(char *str, int len)
{
    char *end = str + len - 1;
    while(str < end)
    {
        if(*str != *end)
        {
            return 0;
        }
        str++;
        end--;
    }
    return 1;
}