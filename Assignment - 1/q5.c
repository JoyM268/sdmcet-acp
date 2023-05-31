//Modular program to display all prime numbers in a given range between m and n
#include<stdio.h>
#include<math.h>

void print_prime(int, int);
main()
{
    int m, n;
    printf("Enter the range: ");
    scanf("%d %d", &m, &n);
    printf("The prime number in the range of %d and %d are:\n", m, n);
    print_prime(m, n);
}

void print_prime(int m, int n)
{
    int i, j, flag;
    for(i = m; i <= n; i++)
    {
        flag = 1;
        for(j = 2; j <= sqrt(i); j++)
        {   if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            printf("%d ", i);
            continue;
        }
    }
}
