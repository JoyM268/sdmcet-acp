//Modular program to compute nCr and nPr
#include<stdio.h>
#include<stdlib.h>

long long factorial(int);
int compute_npr(int, int);
int compute_ncr(int, int);
main()
{
    int n, r;
    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);
    if(n < r)
    {
        printf("Error: n should be greater than or equal to r\n");
        exit(0);
    }
    printf("nPr = %d\n", compute_npr(n, r));
    printf("nCr = %d\n", compute_ncr(n, r));
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

int compute_npr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int compute_ncr(int n, int r)
{
    return compute_npr(n, r) / factorial(r); 
}
