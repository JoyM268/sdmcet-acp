//Modular program to display fibonacci series upto nth term
#include<stdio.h>

void print_fibonacci(int);
main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d terms of fibonacci series are:\n", n);
    print_fibonacci(n);
}

void print_fibonacci(int n)
{
    int firstterm = 0;
    int secondterm = 1;
    int thirdterm, i;
    if(n == 1)
    {
        printf("%d ", firstterm);
    }
    else
    {
        printf("%d %d ", firstterm, secondterm);
        for(i = 3; i <= n; i++)
        {
            thirdterm = firstterm + secondterm;
            printf("%d ", thirdterm);
            firstterm = secondterm;
            secondterm = thirdterm;
        }
    }
}