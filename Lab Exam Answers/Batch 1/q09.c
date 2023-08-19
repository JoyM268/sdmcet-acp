// Write a modular  C program to  print nth fibonocci term using recursive function. Also print how many times the recursive function is called.
#include<stdio.h>

int count = 0;
int fibonacci(int);
main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth fibonacci term is %d.\n", n, fibonacci(n));
    printf("Number of times the function is called: %d.\n", count);
}

int fibonacci(int n)
{
    count++;
    if(n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}