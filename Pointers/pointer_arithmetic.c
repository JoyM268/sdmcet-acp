// Pointer arithmetic
#include<stdio.h>

main()
{
    int a, b, *p1, *p2, x, y, z;
    a = 12;
    b = 4;
    p1 = &a;
    p2 = &b;
    x = *p1 * *p2 - 6;
    y = 4 * - *p2 / *p1 + 10;
    printf("Address of a: %p\n", p1);
    printf("Address of b: %p\n", p2);
    printf("a = %d\nb = %d\n", a, b);
    printf("x = %d\ny = %d\n", x, y);
    *p2 = *p2 + 3;
    printf("*p2 = %d\n", *p2);
    *p1 = *p2 - 5;
    printf("*p1 = %d\n", *p1);
    z = *p1 * *p2 - 6;
    printf("\na = %d\nb = %d\n", a, b);
    printf("z = %d\n", z);
}