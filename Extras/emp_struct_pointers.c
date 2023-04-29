//program to read and print an employee's detail using
//structure and pointers

#include<stdio.h>

typedef struct employee{
  char name[20];
  int id;
  float salary;
} employee;

main()
{
  employee emp;
  employee *ptr = &emp;
  
  printf("Enter Employee Details:\n");
  printf("Enter employee name: ");
  scanf("%s",ptr -> name);
  printf("Enter employee id: ");
  scanf("%i",&ptr -> id);
  printf("Enter employee salary: ");
  scanf("%f",&ptr -> salary);
  
  printf("\nEmployee Details:\n");
  printf("Name: %s\n",ptr -> name);
  printf("ID: %i\n",ptr -> id);
  printf("Salary: %.2f\n",ptr -> salary);
}