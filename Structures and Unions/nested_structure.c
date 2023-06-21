//Program to illustrate structure within structure
#include<stdio.h>

struct employee
{
    char name[30], dept[30];
    struct allowance
    {
        int salary, hra, da, city_allowance;
    } allowance1;
    int dob, eid;
} e1;

main()
{
    printf("Enter Employee Details:\n");
    printf("Enter the name of employee: ");
    scanf("%s", e1.name);
    printf("Enter employee ID: ");
    scanf("%d", &e1.eid);
    printf("Enter date of birth: ");
    scanf("%d", &e1.dob);
    printf("Enter employee department: ");
    scanf("%s", e1.dept);
    printf("Enter salary: ");
    scanf("%d", &e1.allowance1.salary);
    printf("Enter HRA: ");
    scanf("%d", &e1.allowance1.hra);
    printf("Enter DA: ");
    scanf("%d", &e1.allowance1.da);
    printf("Enter city allowance: ");
    scanf("%d", &e1.allowance1.city_allowance);
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e1.name);
    printf("Employee ID: %d\n", e1.eid);
    printf("DOB: %d\n", e1.dob);
    printf("Employee department: %s\n", e1.dept);
    printf("Salary: %d\n", e1.allowance1.salary);
    printf("HRA: %d\n", e1.allowance1.hra);
    printf("DA: %d\n", e1.allowance1.da);
    printf("City allowance: %d\n", e1.allowance1.city_allowance);
}