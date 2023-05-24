//Modular program to chexk whether a string is palindrome 
#include<stdio.h>
#include<string.h>
#define SIZE 20

int check_palindrome(char *c, int len)
{
    int start = 0;
    int end = len - 1;
    while(start < end)
    {
        if(c[start] != c[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

main()
{
    char str[SIZE];
    printf("Enter a input string: ");
    scanf("%s", str);
    int len = strlen(str);
    if(check_palindrome(str, len))
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
}
