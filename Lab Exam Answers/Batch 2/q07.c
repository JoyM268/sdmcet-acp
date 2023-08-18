/* Write a C program to open a file named INVENTORY and store in it the following 
data.:
Item name     Number    Price     Quantity  
AAA-1          111      17.5        115 
BBB-2          125      36          75 
CCC-3          247      31.75       104 
Extend the program 
i. To read the data from the file INVENTORY and display the inventory table with the values of each item.
*/
#include<stdio.h>

main()
{
    FILE *fp;
    char itemName[100];
    int number, quantity, i;
    float price, value;
    fp = fopen("INVENTORY", "w");
    for(i = 1; i <= 3; i++)
    {
        printf("Enter the name, number, price and quantity of item %d: ", i);
        scanf("%s %d %f %d", itemName, &number, &price, &quantity);
        fprintf(fp, "%s\t\t%d\t%.2f\t%d\n", itemName, number, price, quantity);
    }
    fclose(fp);
    fp = fopen("INVENTORY", "r");
    printf("\nInventory table:\n");
    printf("Item name\tNumber\tPrice\tQuantity\tValue\n");
    for(i = 1; i <= 3; i++)
    {
        fscanf(fp, "%s %d %f %d", itemName, &number, &price, &quantity);
        value = price * quantity;
        printf("%s\t\t%d\t%.2f\t%d\t\t%.2f\n", itemName, number, price, quantity, value);
    }
    fclose(fp);
}