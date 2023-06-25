//Program to print reversed string using pointers
#include<stdio.h>
#include<string.h>

void rev(char*);
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    rev(str);
    return 0;
}

void rev(char *p)
{
    int i, j, n;
    char str[100];
    n = strlen(p);
    while(n > 0)
    {
        printf("%c",*(p+n-1));
        --n;
    }
}
