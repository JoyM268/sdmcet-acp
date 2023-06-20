//Program to illustrate to intialize values of one structure variable to another
#include<stdio.h>

struct class{
    int number;
    char name[30];
    float marks;
};

main()
{   int x;
    struct class s1 = {11, "xyz", 75.1};
    struct class s2 = {21, "abc", 80.6};
    struct class s3;
    s3 = s2;
    x = ((s3.number == s2.number) && (s3.marks == s2.marks))? 1:0;
    if(x == 1)
    {
        printf("\nStudent 2 and Student 3 info is same\n");
        printf("%d %s %.1f\n", s3.number, s3.name, s3.marks);
    }
    else
    {
        printf("Student 2 and Student 3 are different\n");
    }
}