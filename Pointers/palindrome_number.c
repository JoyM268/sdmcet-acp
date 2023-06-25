//C program to check whether the given number is palindrome or not using pointers
#include<stdio.h>

int palindrome(int *);
int main()
{
    int n, rev, num;
    int *p = &n;
    printf("Enter the number: ");
    scanf("%d", p);
    num = *p;
    rev = palindrome(p);
    if(rev == num)
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);
    return 0;
}
int palindrome(int *p)
{
    int rev = 0,rem;
    while(*p != 0)
    {
        rem = *p % 10;
        rev = rev*10 + rem;
        *p = *p/10;
    }
    return rev;
}