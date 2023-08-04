/* Write  a  program  to  read  in  an array of  names and to  sort them  in  alphabetical  order.  Use  sort function  that  receives  pointers  to  the  
functions  strcmp and  swap.sort in  turn  should  call  these functions  via  the  pointers. */
#include<stdio.h>
#include<string.h>
#define ROW 100
#define COL 30
void read(char (*)[COL], int);
void print(char (*)[COL], int);
void swap(char *, char *);
void sort(char (*)[COL], int);
main()
{
    char names[ROW][COL];
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    printf("Enter %d names:\n", n);
    read(names, n);
    printf("\nThe names before sorting are:\n");
    print(names, n);
    sort(names, n);
    printf("\nThe names after sorting are:\n");
    print(names, n);
}

void read(char (*names)[COL], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%s", *(names + i));
    }
}

void print(char (*names)[COL], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s\n", *(names + i));
    }
}

void swap(char *a, char *b)
{
    char temp[COL];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort(char (*names)[COL], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(*(names + j), *(names + j + 1)) > 0)
            {
                swap(*(names + j), *(names + j + 1));
            }
        }
    }
}