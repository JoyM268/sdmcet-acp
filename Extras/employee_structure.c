//program to read and print an employee's detail 
//using structure

#include<stdio.h>

typedef struct employee{
  char name[10];
  int id;
  float salary;
} employee;

main()
{
  employee emp;
  
  printf("Enter Employee Details:\n");
  printf("Enter employee name: ");
  scanf("%s",emp.name);
  printf("Enter employee id: ");
  scanf("%i",&emp.id);
  printf("Enter employee salary: ");
  scanf("%f",&emp.salary);
  
  printf("\nEmployee Details:\n");
  printf("Name: %s\n",emp.name);
  printf("ID: %i\n",emp.id);
  printf("Salary: %.2f\n",emp.salary);
}