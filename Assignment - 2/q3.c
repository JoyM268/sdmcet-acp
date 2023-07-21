/* Write a C program to perform the following:
a) Define a structure named PLAYER having fields: name, score1,
score2, score3
b) read ( ) – reads the details of n players.
c) display ( ) – displays the details of the n players.
d) compute ( ) – computes and displays the averages of each player. */

#include<stdio.h>

struct PLAYER{
    char name[30];
    int score1, score2, score3;
};

void read(struct PLAYER [], int);
void display(struct PLAYER [], int);
void compute(struct PLAYER [], int);
main()
{
    struct PLAYER p[60];
    int n;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    read(p, n);
    display(p, n);
    compute(p, n);
}

void read(struct PLAYER p[], int n)
{   
    int i;
    printf("\nEnter the player details:\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter the name and scores of player %d: ", i + 1);
        scanf("%s %d %d %d", p[i].name, &p[i].score1, &p[i].score2, &p[i].score3);
    }
}

void display(struct PLAYER p[], int n)
{
    int i;
    printf("\nPlayers details:");
    for(i = 0; i < n; i++)
    {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Score1: %d\n", p[i].score1);
        printf("Score2: %d\n", p[i].score2);
        printf("Score2: %d\n", p[i].score3);
    }
}

void compute(struct PLAYER p[], int n)
{
    int i;
    printf("\nAverage scores of players:");
    for(i = 0; i < n; i++)
    {
        printf("\nPlayer: %s\nAverage score: %.2f\n", p[i].name, (p[i].score1 + p[i].score2 + p[i].score3)/3.0);
    }
}