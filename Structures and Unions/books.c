//Program to read and display the details of n books and print the highest price of the books and print its corresponding booby name book and take members as edition, book title, book price
#include<stdio.h> 
#include<stdlib.h>
#define SIZE 100

struct book{
    int edition;
    char title[20];
    float price;
};

void read_details(struct book *, int);
void print_details(struct book *, int);
void compute_highest(struct book *, int);

main()
{
    struct book b[SIZE];
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    read_details(&b, n);
    print_details(&b, n);
    compute_highest(&b, n);
}

void read_details(struct book *b, int n)
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

void print_details(struct book *b, int n)
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

void compute_highest(struct book *b, int n)
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
    printf("\nThe highest price of the book is: %.2f\n", highest);
    printf("Book Edition: %d\n", b[index].edition);
    printf("Book Title: %s\n", b[index].title);
    printf("Book Price: %.2f\n", b[index].price);
}
