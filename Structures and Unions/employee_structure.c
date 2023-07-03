//Program to define a structure by the name of employee with the members
//name, salary, employee id, date of joining, take the employee info and print it
#include<stdio.h>

struct employee{
    char name[20];
    float salary;
    int emp_id;
    int date;
};

main()
{
    struct employee e1;
    printf("Enter the employee details:\n");
    printf("Enter the name: ");
    scanf("%s", e1.name);
    printf("Enter the salary: ");
    scanf("%f", &e1.salary);
    printf("Enter the employee ID: ");
    scanf("%d", &e1.emp_id);
    printf("Enter date of joining: ");
    scanf("%d", &e1.date);
    printf("\nEmployee details are:\n");
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("Employee ID: %d\n", e1.emp_id);
    printf("Date of joining: %d\n", e1.date);
}
