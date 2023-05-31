//Modular program to concatenate two strings without using strcat()
#include<stdio.h>
#define SIZE 100

void concatenate(char *, char *, char *);
main()
{
    char str1[SIZE], str2[SIZE], result[2*SIZE];
    printf("Enter input string 1: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter input string 2: ");
    scanf("%[^\n]", str2);
    concatenate(str1, str2, result);
    printf("Concatenated string: %s\n", result);
}

void concatenate(char *str1, char *str2, char *result)
{
    int i, j;
    for(i = 0; str1[i] != '\0'; i++)
    {
        result[i] = str1[i];
    }
    for(j = 0; str2[j] != '\0'; j++)
    {
        result[i++]= str2[j];
    }
    result[i] = '\0';
}
