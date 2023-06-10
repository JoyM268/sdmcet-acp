//Program to find factorial of a number using recursion
#include<stdio.h>

int factorial(int);
main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("THe factorial of %d is %d\n", n, factorial(n));
}

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}