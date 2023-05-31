//Modular program to check whether given number is palindrome or not
#include<stdio.h>

int reverse(int);
void check_palindrome(int);
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_palindrome(num);
}

int reverse(int num)
{
    int remainder, rev = 0;
    while(num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    return rev;
}

void check_palindrome(int num)
{
    if(num == reverse(num))
    {
        printf("%d is a palindrome\n", num);
        return;
    }
    printf("%d is not a palindrome\n", num);
}
