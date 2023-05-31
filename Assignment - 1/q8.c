//Modular program to check whether the character is uppercase or not without using library function
#include<stdio.h>

int is_uppercase(char);
main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(is_uppercase(ch))
    {
        printf("The character %c is in uppercase\n", ch);
    }
    else
    {
        printf("The character %c is not in uppercase\n", ch);
    }
}

int is_uppercase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }
    return 0;
}
