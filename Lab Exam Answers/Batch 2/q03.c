/* Define a structure named census with the following 3 members. 
i. A character array city[] to store names. 
ii. A long integer to store population of the city. 
iii. A float member to store the literacy level.

Write a modular C program to do the following. 
i. To read details of ‘n’ cities randomly. 
ii. To sort the list based on population and display the sorted list.
*/

#include<stdio.h>
#define SIZE 50

struct census
{
    char city[30];
    int population;
    float literacy;
};

void readDetails(struct census *, int);
void swap(struct census *, struct census *);
void sortList(struct census *, int);
void displayDetails(struct census *, int);

main()
{
    int n;
    struct census c[SIZE];
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    readDetails(c, n);
    sortList(c, n);
    displayDetails(c, n);
}

void readDetails(struct census *c, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter the name, population and literacy level of city %d: ", i + 1);
        scanf("%s %d %f", c[i].city, &c[i].population, &c[i].literacy);
    }
}

void swap(struct census *a, struct census *b)
{
    struct census temp = *a;
    *a = *b;
    *b = temp;
}

void sortList(struct census *c, int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(c[j].population > c[j + 1].population)
            {
                swap(&c[j], &c[j + 1]);
            }
        }
    }   
}

void displayDetails(struct census *c, int n)
{
    int i;
    printf("\nCity\t\tPopulation\tLiteracy Level\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%.2f\n", c[i].city, c[i].population, c[i].literacy);
    }
}