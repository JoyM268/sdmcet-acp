// Write a modular C-program to check whether a given string is palindrome or not using pointers.
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

/* OR

int is_palindrome(char *str, int len)
{
    int i;
    for(i = 0; i < len/2; i++)
    {
        if(*(str + i) != *(str + (len - i - 1)))
        {
            return 0;
        }
    }
    return 1;
}

*/
