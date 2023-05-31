//Modular program to count the number of uppercase and lowercase letters in a string
#include<stdio.h>
#define SIZE 50

int count_case(char *, int *, int *);
main()
{
    char str[SIZE];
    int count_upr, count_lwr;
    printf("Enter a input string: ");
    scanf("%s", str);
    count_case(str, &count_lwr, &count_upr);
    printf("Number of lowercase letters: %d\n", count_lwr);
    printf("Number of uppercase letters: %d\n", count_upr);
}

int count_case(char *str, int *count_lwr, int *count_upr)
{
    *count_upr = 0;
    *count_lwr = 0;
    while(*str)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            (*count_lwr)++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            (*count_upr)++;
        }
        str++;
    }
}