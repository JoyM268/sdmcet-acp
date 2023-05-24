//Modular program to reverse a string using pointers
#include<stdio.h>
#include<string.h>
#define SIZE 20
void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *c, int len)
{
    int start = 0;
    int end = len - 1;
    while(start < end)
    {
        swap(&c[start], &c[end]);
        start++;
        end--;
    }
}

main()
{
    char str[SIZE];
    printf("Enter a input string: ");
    scanf("%s", str);
    int len = strlen(str);
    reverse(str, len);
    printf("The string in reverse is: %s\n", str);
}
