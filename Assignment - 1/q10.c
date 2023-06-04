//Modular program to sort names in an alphabetical order
#include<stdio.h>
#include<string.h>
#define ROW 100
#define COL 20

void read_names(char [][COL], int);
void print_names(char [][COL], int);
void swap_strings(char *, char *);
void bubble_sort(char [][COL], int);
main()
{
    char names[ROW][COL];
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    read_names(names, n);
    bubble_sort(names, n);
    printf("\nThe names after sorting are:\n");
    print_names(names, n);
}

void swap_strings(char *a, char *b)
{
    char temp[COL];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void bubble_sort(char names[][COL], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(names[j], names[j+1]) > 0)
            {
                swap_strings(names[j], names[j + 1]);
            }
        }
    }
}
void read_names(char names[][COL], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }
}

void print_names(char names[][COL], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
}
