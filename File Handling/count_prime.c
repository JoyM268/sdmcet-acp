//Program to count prime numbers in a file containing numbers and also to store those prime numbers in a seprate file PRIME
#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    int i;
    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

main()
{
    FILE *fp1, *fp2;
    int i, numbers, count = 0;
    fp1 = fopen("NUMBERS", "w");
    printf("Enter the numbers: ");
    for(i = 0; i < 50; i++)
    {
        scanf("%d", &numbers);
        if(numbers == -1) break;
        putw(numbers, fp1);
    }
    fclose(fp1);
    fp1 = fopen("NUMBERS", "r");
    fp2 = fopen("PRIME", "w");
    while((numbers = getw(fp1)) != EOF)
    {
        if(isPrime(numbers))
        {
            putw(numbers, fp2);
            count++;
        }
    }
    fclose(fp1);
    fclose(fp2);
    fp2 = fopen("PRIME", "r");
    printf("The count of prime numbers is: %d\n", count);
    printf("The contents of PRIME file is:\n");
    while((numbers = getw(fp2)) != EOF)
    {
        printf("%d ", numbers);
    }
    fclose(fp2);
}
