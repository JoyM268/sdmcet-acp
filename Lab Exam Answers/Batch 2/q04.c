/* Define a structure called student_info that will contain USN, Name of the student, marks in 3 IAs and CTA as its members. Using student_info, write a modular 
C program to read the information about 50 students into an array Students. Compute and print CIE (sum of best 2 IAs + CTA) marks of each student in the following
format: 
USN  Name   IA1  IA2  IA3  CTA  CIE */
#include<stdio.h>
#define SIZE 50

struct student_info{
  char name[30], usn[11];
  int ia1, ia2, ia3, cta;
};

void display(struct student_info *, int *);
void compute(struct student_info *);
void read(struct student_info *);
main() 
{
  struct student_info students[SIZE];
  read(students);
}

void display(struct student_info *students, int *cie) 
{
  int i;
  printf("\nUSN\tName\tIA1\tIA2\tIA3\tCTA\tCIE\n");
  for (i = 0; i < SIZE; i++) 
  {
    printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\n", students[i].usn, students[i].name, students[i].ia1, students[i].ia2, students[i].ia3, students[i].cta, cie[i]);
  }
}

void compute(struct student_info *students)
{
  int cie[SIZE], i;
  for (i = 0; i < SIZE; i++) 
  {
    if (students[i].ia1 >= students[i].ia2 && students[i].ia3 >= students[i].ia2) 
    {
      cie[i] = students[i].ia1 + students[i].ia3 + students[i].cta;
    } 
    else if (students[i].ia2 >= students[i].ia1 && students[i].ia3 >= students[i].ia1)
    {
      cie[i] = students[i].ia2 + students[i].ia3 + students[i].cta;
    } 
    else 
    {
      cie[i] = students[i].ia1 + students[i].ia2 + students[i].cta;
    }
  }
  display(students, cie);
}

void read(struct student_info *students)
{
  int i;
  printf("Enter the student details:");
  for (i = 0; i < SIZE; i++) 
  {
    printf("\nStudent %d: ", i + 1);
    printf("\nEnter name: ");
    scanf("%s", students[i].name);
    printf("Enter USN: ");
    scanf("%s", students[i].usn);
    printf("Enter IA marks: ");
    scanf("%d %d %d", &students[i].ia1, &students[i].ia2, &students[i].ia3);
    printf("Enter CTA: ");
    scanf("%d", &students[i].cta);
  }
  compute(students);
}