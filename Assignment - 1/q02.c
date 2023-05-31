//Modular program to find GCD and LCM of two numbers
#include<stdio.h>

int gcd(int, int);
int lcm(int, int);
main()
{
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    printf("GCD of %d and %d is %d\n", m, n, gcd(m, n));
    printf("LCM of %d and %d is %d\n", m, n, lcm(m, n));
}

int gcd(int m, int n)
{
    while(m != n)
    {
        if(m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    return m;
}

int lcm(int m, int n)
{
    return (m * n)/gcd(m, n);
}
