/* A book shop uses a personal computer to maintain the inventory of books that are being sold at the shop. The list includes details such as author, title, 
price, publisher, stock position. etc. Whenever a customer want a book, the shop keeper inputs the title and author of the book and system replies whether it 
is in the list or not. If it is not in the list, an appropriate message is to be displayed. If it is in the list, then the system displays the book details and 
asks for number of copies. If the requested copies are available, the total cost of the books are displayed, otherwise the message “required copies not in 
the stock” should be displayed. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book 
{
    char author[30];
    char title[30];
    char publisher[30];
    float price;
    int stock;
};

void read_details(struct book *, int);
void display_details(struct book *, int);
void book_detail(struct book *, int);
int search_book(struct book *, int, char *, char *);
void purchase_book(struct book *, int);
main()
{
    int n, index, choice;
    char author[30], title[30];
    struct book b[30];
    printf("Enter the number of books: ");
    scanf("%d", &n);
    read_details(b, n);
    while(1)
    {
        printf("\nMenu:\n");
        printf("1.Search books\n");
        printf("2.Display books\n");
        printf("3.Exit\n");
        printf("Enter a choice(1, 2, 3): ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the title: ");
                scanf("%s", title);
                printf("Enter the author: ");
                scanf("%s", author);
                index = search_book(b, n, title, author);
                if(index == -1)
                {
                    printf("Book not found\n");
                    break;
                }
                printf("Book found\n");
                book_detail(b, index);
                purchase_book(b, index);
                break;
            case 2:
                display_details(b, n);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}

void read_details(struct book *b, int n)
{
    int i;
    printf("\nEnter books details:");
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Enter the title: ");
        scanf("%s", b[i].title);
        printf("Enter the author: ");
        scanf("%s", b[i].author);
        printf("Enter the publisher: ");
        scanf("%s", b[i].publisher);
        printf("Enter the price: ");
        scanf("%f", &b[i].price);
        printf("Enter the stock: ");
        scanf("%d", &b[i].stock);    
    }
}

void display_details(struct book *b, int n)
{
    int i;
    printf("\nBooks details:");
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Publisher: %s\n", b[i].publisher);
        printf("Price: %.2f\n", b[i].price);
        printf("Stock: %d\n", b[i].stock);
    }
}

void book_detail(struct book *b, int index)
{
    printf("\nBook details:\n");
    printf("Title: %s\n", b[index].title);
    printf("Author: %s\n", b[index].author);
    printf("Publisher: %s\n", b[index].publisher);
    printf("Price: %.2f\n", b[index].price);
    printf("Stock: %d\n", b[index].stock);
}

int search_book(struct book *b, int n, char *title, char *author)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(strcmp(author, b[i].author) == 0 && strcmp(title, b[i].title) == 0)
        {
            return i;
        }
    }
    return -1;
}

void purchase_book(struct book *b, int index)
{
    int copies, n;
    printf("\nEnter the number of copies: ");
    scanf("%d", &copies);
    if(copies <= b[index].stock)
    {
        printf("The total price is: %.2f\n", b[index].price * copies);
        printf("Do you want to proceed with the transaction(0 for yes/ 1 for no): ");
        scanf("%d", &n);
        if(n == 1)
        {
            return;
        }
        b[index].stock -= copies;
        printf("Books succesfully purchased\n");
        return;
    }
    printf("Required copies not in stock\n");
}
