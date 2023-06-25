//Program to display the fibonacci numbers up to n using pointers
#include<stdio.h>

void fib(int *);
int main()
{
    int n;
    int *p=&n;
    printf("Enter the vaue of n\n");
    scanf("%d",p);
    fib(p);
    return 0;
}

void fib(int *p)
{
    int fib1 = 0, fib2 = 1, fib3, i;
    printf("%d\t%d\t",fib1 ,fib2);
    fib3 = fib2 + fib1;
    while(fib3 <= *p)
    {
        printf("%d\t",fib3);
        fib1=fib2;
        fib2=fib3;
        fib3=fib1+fib2;
    }
}