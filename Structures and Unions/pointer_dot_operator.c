//Illustrate structure pointers for dot operators
#include<stdio.h>
#include<string.h>

struct course
{
    char coursename[30];
    int coursecode;
    char courseduration[40];
};

main()
{
    struct course c1, *ptr;
    ptr = &c1;
    strcpy(c1.coursename, "ACP");
    c1.coursecode = 22100;
    strcpy(c1.courseduration, "4 Months");
    printf("Course name = %s\nCourse code = %d\nCourse duration = %s\n", (*ptr).coursename, (*ptr).coursecode, (*ptr).courseduration);
}