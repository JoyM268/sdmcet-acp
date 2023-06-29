// Program to read and display the information of the employee and also show how the return value of the structure is done from function call
#include<stdio.h>
#include<stdlib.h>

struct employee{
    int eid;
    char name[30];
    float salary;
};

struct employee read_info(struct employee);
void display_info(struct employee);
main()
{
    struct employee e1, e2;
    int choice;
    for(;;)
    {
        printf("Enter 1 to Read details\n");
        printf("Enter 2 to Display details\n");
        printf("Enter 3 to Exit\n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                e2 = read_info(e1);
                break;
            case 2:
                display_info(e2);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
        printf("\n");
    }
}
struct employee read_info(struct employee e)
{
    printf("\nEnter employee details:\n");
    printf("Enter the employee id: ");
    scanf("%d", &e.eid);
    printf("Enter the employee name: ");
    scanf("%s", e.name);
    printf("Enter the employee salary: ");
    scanf("%f", &e.salary);
    return e;
}

void display_info(struct employee e)
{
    printf("\nEmployee details:\n");
    printf("Employee id: %d\n", e.eid);
    printf("Employee name: %s\n", e.name);
    printf("Employee salary: %.2f\n", e.salary);
}