//Program to find gcd of two numbers recursively
#include<stdio.h>

int gcd(int, int);
main()
{
    int m, n;
    printf("Enter the two numbers: ");
    scanf("%d %d", &m, &n);
    printf("The GCD of %d and %d is: %d\n", m, n, gcd(m, n));
}

int gcd(int m, int n)
{
    if(n == 0)
    {
        return m;
    }
    else if(m < n)
    {
        return gcd(n,  m);
    }
    else
    {
        return gcd(n, m % n);
    }
}
