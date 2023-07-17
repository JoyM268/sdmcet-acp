/* Write a C program to perform the following: 
a) Define a structure named STUDENT having fields: rollno, name, ia1, 
ia2, ia3, cta. 
b) read ( ) – reads the details of a student. 
c) display ( ) – displays the details of the student. 
d) compute ( ) – computes and displays the cie marks of the student.
*/
#include<stdio.h>

struct student 
{
  char name[30];
  int rollno, ia1, ia2, ia3, cta;
};

void display(struct student * , int, int *);
void compute(struct student * , int);
void read(struct student * , int);
main() 
{
  int n;
  struct student s[60];
  printf("Enter the number of students: ");
  scanf("%d", &n);
  read(s, n);
}

void display(struct student *s, int n, int *cie) 
{
  int i;
  printf("\nStudent details:");
  for (i = 0; i < n; i++) 
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

void compute(struct student *s, int n) 
{
  int cie[60], i;
  for (i = 0; i < n; i++) 
  {
    if (s[i].ia1 >= s[i].ia2 && s[i].ia3 >= s[i].ia2) 
    {
      cie[i] = s[i].ia1 + s[i].ia3 + s[i].cta;
    } 
    else if (s[i].ia2 >= s[i].ia1 && s[i].ia3 >= s[i].ia1)
    {
      cie[i] = s[i].ia2 + s[i].ia3 + s[i].cta;
    } 
    else 
    {
      cie[i] = s[i].ia1 + s[i].ia2 + s[i].cta;
    }
  }
  display(s, n, cie);
}

void read(struct student *s, int n) 
{
  int i;
  printf("Enter the student details:");
  for (i = 0; i < n; i++) 
  {
    printf("\nStudent %d: ", i + 1);
    printf("\nEnter name: ");
    scanf("%s", s[i].name);
    printf("Enter roll no: ");
    scanf("%d", &s[i].rollno);
    printf("Enter IA marks: ");
    scanf("%d %d %d", &s[i].ia1, &s[i].ia2, &s[i].ia3);
    printf("Enter CTA: ");
    scanf("%d", &s[i].cta);
  }
  compute(s, n);
}