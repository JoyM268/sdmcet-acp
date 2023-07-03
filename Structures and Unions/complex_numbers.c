//Program to compute the sum, difference and product of two complex numbers
#include<stdio.h>

struct complex{
        int real, img;
}c1, c2, c3, c4, c5;

void read();
void display();
void add();
void difference();
void product();
main()
{
    read();
    display();
    add();
    difference();
    product();
}

void read()
{
    printf("Enter complex number 1 of the form a + ib: ");
    scanf("%d %d", &c1.real, &c1.img);
    printf("Enter complex number 2 of the form a + ib: ");
    scanf("%d %d", &c2.real, &c2.img);
}

void display()
{
    printf("Complex number 1 of the form a +ib = %d + i%d\n", c1.real, c1.img);
    printf("Complex number 2 of the form a +ib = %d + i%d\n", c2.real, c2.img);
}

void add()
{
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    printf("The sum of 2 complex numbers is = %d + i%d\n", c3.real, c3.img);
}

void difference()
{
    c4.real = c1.real - c2.real;
    c4.img = c1.img - c2.img;
    printf("The difference of 2 complex numbers is = %d + i%d\n", c4.real, c4.img);
}

void product()
{
    c5.real = c1.real * c2.real;
    c5.img = c1.img * c2.img;
    printf("The product of 2 complex numbers is = %d + i%d\n", c5.real, c5.img);
}