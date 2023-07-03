//Program to define a structure by the name student and the members as student name, roll no., branch. read the student information and display the same for n students
#include<stdio.h>

struct student{
    char name[20];
    int rollno;
    char branch[10];
};

void read_info(struct student [], int);
void display_info(struct student [], int);
main()
{
    struct student s[60];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    read_info(s, n);
    display_info(s, n);
}

void read_info(struct student s[], int n)
{
    int i;
    printf("\nEnter student details:");
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the name of the student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the rollno. of the student %d: ", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Enter the branch of the student %d: ", i + 1);
        scanf("%s", s[i].branch);
    }
}

void display_info(struct student s[], int n)
{
    int i;
    printf("\nStudent details:");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i+ 1);
        printf("Name: %s\n", s[i].name);
        printf("Rollno: %d\n", s[i].rollno);
        printf("Branch: %s\n", s[i].branch);
    }
}