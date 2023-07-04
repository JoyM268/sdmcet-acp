//Program to compute CIE of students in a class with structure name student and members as Name, Rollno, IA1, IA2, IA3, and CTA
#include<stdio.h>


struct student{
    char name[30];
    int rollno, ia1, ia2, ia3, cta;
};

void display_details(struct student *, int, int *);
void compute_cie(struct student *, int);
void read_details(struct student *, int);
main()
{
    int n;
    struct student s[60];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    read_details(s, n);
}

void display_details(struct student *s, int n, int *cie)
{
    int i;
    printf("\nStudent details:");
    for(i = 0; i < n; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Roll no: %d\n", s[i].rollno);
        printf("IA - 1: %d\n", s[i].ia1);
        printf("IA - 2: %d\n", s[i].ia2);
        printf("IA - 3: %d\n", s[i].ia3);
        printf("CTA: %d\n", s[i].cta);
        printf("CIE: %d\n", cie[i]);
    }
}

void compute_cie(struct student *s, int n)
{
    int cie[60], i;
    for(i = 0; i < n; i++)
    {
        if(s[i].ia1 >= s[i].ia2 && s[i].ia3 >= s[i].ia2)
        {
            cie[i] = s[i].ia1 + s[i].ia3 + s[i].cta;
        }
        else if(s[i].ia2 >= s[i].ia1 && s[i].ia3 >= s[i].ia1)
        {
            cie[i] = s[i].ia2 + s[i].ia3 + s[i].cta;
        }
        else
        {
            cie[i] = s[i].ia1 + s[i].ia2 + s[i].cta;
        }
    }
    display_details(s, n, cie);
}

void read_details(struct student *s, int n)
{
    int i;
    printf("Enter the student details:\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter details of student %d: ", i + 1);
        scanf("%s %d %d %d %d %d", s[i].name, &s[i].rollno, &s[i].ia1, &s[i].ia2, &s[i].ia3, &s[i].cta);
    }
    compute_cie(s, n);
}