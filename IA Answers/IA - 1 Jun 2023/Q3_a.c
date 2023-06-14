//Modular c program using pointers to swap 2 numbers and print the result in the calling function
#include<stdio.h>

void swap(int *a, int *b);
main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping:\n");
    printf("num 1 = %d and num 2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("num 1 = %d and num 2 = %d\n", num1, num2);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
