//Program to print the address of the pointer variable
#include<stdio.h>

void pointers();
int main()
{
    pointers();
    return 0;
}

void pointers()
{
    int item=20,*ptr;
    ptr=&item;
    printf("Value at ptr = %p\n",ptr);
    printf("Value at item = %d\n",item);
    printf("value at *ptr = %d\n",*ptr);
}