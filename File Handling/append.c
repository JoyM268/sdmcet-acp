//Write a program to append additional items to the file in inventory.c program and to print total contents of the file.
#include <stdio.h> 
 
struct invent_record 
{
    char name[10]; 
    int number; 
    float price; 
    int quantity; 
}; 

main() 
{
    struct invent_record item; 
    char filename[10]; 
    int response; 
    FILE *fp; 
    long n; 
    void append (struct invent_record *, FILE *); 
    printf("Type filename:"); 
    scanf("%s", filename);
    fp = fopen(filename, "a+"); 
    do 
    {
        append(&item, fp); 
        printf("\nItem %s appended.\n",item.name); 
        printf("\nDo you want to add another item (1 for YES /0 for NO)?"); 
        scanf("%d", &response); 
    } while (response == 1); 
    n = ftell(fp); 
    fclose(fp); 
    fp = fopen(filename, "r"); 
    while(ftell(fp) < n) 
    { 
        fscanf(fp,"%s %d %f %d", item.name, &item.number, &item.price, &item.quantity); 
        if(feof(fp)) break;
        fprintf(stdout,"%-8s %7d %8.2f %8d\n", item.name, item.number, item.price, item.quantity); 
    } 
    fclose(fp); 
}

void append(struct invent_record *product, FILE *ptr)
{ 
    printf("Item name:"); 
    scanf("%s", product->name); 
    printf("Item number:"); 
    scanf("%d", &product->number); 
    printf("Item price:"); 
    scanf("%f", &product->price); 
    printf("Quantity:"); 
    scanf("%d", &product->quantity); 
    fprintf(ptr, "%s %d %.2f %d\n", product->name, product->number, product->price, product->quantity); 
}
