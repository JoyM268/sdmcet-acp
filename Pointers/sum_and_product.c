//program to compute sum and product to demonstrate multiple value return
#include<stdio.h>

int get_sum_product(int a, int b, int *product)
{
    *product = a * b;
    return a + b;
}

main()
{
    int a, b, product, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = get_sum_product(a, b, &product);
    printf("Sum = %d\nProduct = %d\n", sum, product);
}