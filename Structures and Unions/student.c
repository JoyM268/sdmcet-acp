//Program to define a structure by the name student and the members as student name, roll no., branch. read the student information and display the same
#include<stdio.h>

struct student{
    char name[20];
    int rollno;
    char branch[10];
}s1;

void read_info();
void display_info();
main()
{
    read_info();
    display_info();
}

void read_info()
{
    printf("Enter student information:\n");
    printf("Enter the name of the student: ");
    scanf("%s", s1.name);
    printf("Enter the rollno. of the student: ");
    scanf("%d", &s1.rollno);
    printf("Enter the branch of the student: ");
    scanf("%s", s1.branch);
}

void display_info()
{
    printf("\nStudent details:\n");
    printf("Name: %s\n", s1.name);
    printf("Rollno: %d\n", s1.rollno);
    printf("Branch: %s\n", s1.branch);
}