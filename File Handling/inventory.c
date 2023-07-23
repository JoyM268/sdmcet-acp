//Write a program to open a file named INVENTORY and store in it the following data:
/* 
Item name     Number    Price    Quantity 
AAA-1         111       17.50    115
BBB-2         125       36.0     75
C-3           247       31.75    104
*/
#include<stdio.h>

main()
{
    FILE *fp;
    int i, number, quantity;
    float price, value;
    char name[10], filename[10];
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "w");
    printf("Input inventory data:\n");
    printf("Item name Number Price Quantity\n");
    for(i = 0; i < 3; i++)
    {
        fscanf(stdin, "%s %d %f %d", name, &number, &price, &quantity);
        fprintf(fp, "%s  %d  %.2f  %d\n", name, number, price, quantity);
    }
    fclose(fp);
    fprintf(stdout,"\n\n");
    fp = fopen(filename, "r");
    printf("Item name  Number      Price   Quantity    Value\n");
    for(i = 0; i < 3; i++)
    {
        fscanf(fp, "%s %d %f %d", name, &number, &price, &quantity);
        value = price * quantity;
        fprintf(stdout, "%-8s %7d %11.2f %8d %11.2f\n", name, number, price, quantity, value);
    }
    fclose(fp);
}