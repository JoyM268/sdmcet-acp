//Program to find factorial using storage classes and recurssion
#include<stdio.h>
int fact = 1;
int factorial(int n)
{
    int i;
    static int call = 0;
    call++;
    printf("Factorial function called %d times\n", call);
    if(n == 0 || n == 1)
    {
        return fact;
    }
    return n *factorial(n  - 1);
}

main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of of %d is %d\n", n, factorial(n));
}