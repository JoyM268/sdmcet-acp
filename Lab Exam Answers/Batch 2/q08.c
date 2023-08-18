/* Write a C program to open a file named  EMPLOYEE-Details and store in it the 
following data.: 
Employee name      Age           Basic-Salary   
AAA                 38                 20000             
BBB                 42                 19300      
CCC                 50                 15000
Extend the program to read the data from the file and compute the total tax deductions 
If the basic salary is --- 
10000<=Basic-Salary<15000 10%  of the basic salary 
15000<=Basic-Salary<25000 15%  of the basic salary
*/ 
#include<stdio.h>

main()
{
    char employeeName[30];
    int age, i;
    float basicSalary, deduction;
    FILE *fp = fopen("EMPLOYEE-Details", "w");
    for(i = 0; i < 3; i++)
    {
        printf("Enter the name, age and basic salary of employee %d: ", i+1);
        scanf("%s %d %f", employeeName, &age, &basicSalary);
        fprintf(fp, "%s\t\t%d\t%.0f\n", employeeName, age, basicSalary);
    }
    fclose(fp);
    fp = fopen("EMPLOYEE-Details", "r");
    printf("Employee Name\tAge\tBasic-Salary\tTax Deduction\n");
    for(i = 0; i < 3; i++)
    {
        fscanf(fp, "%s %d %f", employeeName, &age, &basicSalary);
        if(basicSalary >= 10000 && basicSalary < 15000)
        {
            deduction = basicSalary/10;
        }
        else if(basicSalary >= 15000 && basicSalary < 25000)
        {
            deduction = (15*basicSalary)/100;
        }
        else
        {
            deduction = 0;
        }
        printf("%s\t\t%d\t%.0f\t\t%.2f\n", employeeName, age, basicSalary, deduction);
    }
    fclose(fp);
}