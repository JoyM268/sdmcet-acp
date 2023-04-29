//Program to Store Information of a Student Using Structure
#include<stdio.h>
#define SIZE 60

typedef struct student
{
  char name[20];
  int rollno;
  float cgpa;
} student;

main()
{
  
  student s[SIZE];
  int num, i;
  printf("Enter the number of students: ");
  scanf("%i",&num);
  printf("\n");
  for(i = 0; i < num; i++)
  {
    getchar();
    printf("Enter the name of student %i: ",i+1);
    scanf("%[^\n]",s[i].name);
    printf("Enter the roll number of student %i: ",i+1);
    scanf("%i",&s[i].rollno);
    printf("Enter the cgpa of student %i: ",i+1);
    scanf("%f",&s[i].cgpa);
    printf("\n");
  }
  printf("Student Details:\n\n");
  for(i = 0; i < num; i++)
  {
    printf("Student %i:\n",i+1);
    printf("Name: %s\n",s[i].name);
    printf("Roll No: %i\n",s[i].rollno);
    printf("CGPA: %.1f\n\n",s[i].cgpa);
  }
}