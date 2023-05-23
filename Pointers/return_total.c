//Modular program to find sum of two numbers using pointers and to return total as a pointer
#include<stdio.h>

void sum(int *a, int *b, int *total)
{    
    *total = *a + *b;
}

main()
{
    int num1, num2, total;
    printf("Enter num 1 and num 2: ");
    scanf("%d %d", &num1, &num2);
    sum(&num1, &num2, &total);
    printf("Total = %d\n", total);
}