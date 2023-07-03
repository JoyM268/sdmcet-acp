// Program to read and display the information of the employee
#include<stdio.h>

struct employee{
    int eid;
    char name[30];
    float salary;
};

void read_info(struct employee [], int);
void display_info(struct employee [], int);
main()
{
    struct employee e[10];
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    read_info(e, n);
    display_info(e, n);
}

void read_info(struct employee e[], int n)
{
    int i;
    printf("\nEnter employee details:");
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the name of the employee %d: ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter the EID of the employee %d: ", i + 1);
        scanf("%d", &e[i].eid);
        printf("Enter the salary of the employee %d: ", i + 1);
        scanf("%f", &e[i].salary);
    }
}

void display_info(struct employee e[], int n)
{
    int i;
    printf("\nEmployee details:");
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i+ 1);
        printf("Name: %s\n", e[i].name);
        printf("EID: %d\n", e[i].eid);
        printf("Salary: %.2f\n", e[i].salary);
    }
}