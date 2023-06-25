//Program to illustrate array of structure
#include<stdio.h>

struct marks
{
    int m1, m2, m3;
};

main()
{
    int i;
    struct marks std[3] = {10, 20, 30 , 40, 50, 60, 70, 80, 90};
    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Marks 1: %d\n", std[i].m1);
        printf("Marks 2: %d\n", std[i].m2);
        printf("Marks 3: %d\n", std[i].m3);
    }
}
