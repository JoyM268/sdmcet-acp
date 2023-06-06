//Program to convert binary to decimal
#include<stdio.h>
#include<math.h>

int decimal(int num)
{
    int sum = 0, i = 0;
    while(num != 0)
    {
        sum += (num % 10) * pow(2, i++);
        num /= 10;  
    }
    return sum;
}
main()
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("%d in decimal is %d\n", binary, decimal(binary));
}