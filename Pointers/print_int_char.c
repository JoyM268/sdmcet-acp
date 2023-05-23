//Modular program to intialize and print two integer variable and character variable using pointer
#include<stdio.h>

void initialize(int *a, int *b, char *ch)
{
    *a = 30;
    *b = 40;
    *ch = 'A';
}

main()
{
    int a, b;
    char c;
    initialize(&a, &b, &c);
    printf("a = %d\nb = %d\nc = %c\n", a, b, c);
}