// Simple program using pointers
#include<stdio.h>
main()
{
    int a, b, *p, *q;
    a = 200;
    p = &a;
    b = 900;
    q = &b;
    printf("a = %d\nb = %d\n", a, b);
    printf("p = %p\nq = %p\n", p, q);
    printf("*p = %d\n*q = %d\n", *p, *q);
}