//Modular program to find factorial of a number
#include<stdio.h>

long long factorial(int);
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d is %lld\n", num, factorial(num));
}

long long factorial(int num)
{
    int i;
    long long fact = 1;
    for(i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}