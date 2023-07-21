/* Write a C program to perform the following:
a) Define a structure named BOOK having fields: Title, Edition and
Price.
b) read ( ) - reads the details of n books.
c) Display () – displays the details of n books.
d) compute ( ) - determine and display the title of the book corresponding
to highest price. */

#include<stdio.h> 
#include<stdlib.h>
#define SIZE 100

struct BOOK{
    int edition;
    char title[20];
    float price;
};

void read(struct BOOK *, int);
void display(struct BOOK *, int);
void compute(struct BOOK *, int);

main()
{
    struct BOOK b[SIZE];
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    read(b, n);
    display(b, n);
    compute(b, n);
}

void read(struct BOOK *b, int n)
{
    int i;
    printf("\nEnter Books Details:");
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the edition of book %d: ", i + 1);
        scanf("%d", &b[i].edition);
        printf("Enter the title of book %d: ", i + 1);
        scanf("%s", b[i].title);
        printf("Enter the price of book %d: ", i + 1);
        scanf("%f", &b[i].price);
    }
}

void display(struct BOOK *b, int n)
{
    int i;
    printf("\nBooks Details:");
    for(i = 0; i < n; i++)
    {
        printf("\nEdition: %d\n", b[i].edition);
        printf("Title: %s\n", b[i].title);
        printf("Price: %.2f\n", b[i].price);
    }
}

void compute(struct BOOK *b, int n)
{
    float highest = b[0].price;
    int i, index;
    for(i = 1; i < n; i++)
    {
        if(highest < b[i].price)
        {
            highest = b[i].price;
            index = i; 
        }
    }
    printf("\nThe book with highest price is:\n", highest);
    printf("Book Edition: %d\n", b[index].edition);
    printf("Book Title: %s\n", b[index].title);
    printf("Book Price: %.2f\n", b[index].price);
}