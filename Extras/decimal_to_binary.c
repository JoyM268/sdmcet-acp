//Program to convert decimal to binary
#include<stdio.h>

void binary(int decimal)
{
    int arr[32], i = 0, j;
    while(decimal != 0)
    {
        arr[i++] =  decimal % 2; 
        decimal /= 2;
    }
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    binary(decimal);
}