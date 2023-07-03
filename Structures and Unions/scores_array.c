//Program to read and display the scores of n players and also compute the average score of each player in a game. Define a structure by the name players and
//members are score1, score2, score3;
#include<stdio.h>

struct players{
    int score1, score2, score3;
};

void read_scores(struct players [], int);
void print_scores(struct players [], int);
void compute_avg(struct players [], int);
main()
{
    struct players p[60];
    int n;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    read_scores(p, n);
    print_scores(p, n);
    compute_avg(p, n);
}

void read_scores(struct players p[], int n)
{   
    int i;
    printf("\nEnter the player scores:\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter the scores of player %d: ", i + 1);
        scanf("%d %d %d", &p[i].score1, &p[i].score2, &p[i].score3);
    }
}

void print_scores(struct players p[], int n)
{
    int i;
    printf("\nPlayers score details:");
    for(i = 0; i < n; i++)
    {
        printf("\nPlayer %d:\n", i + 1);
        printf("Score1: %d\n", p[i].score1);
        printf("Score2: %d\n", p[i].score2);
        printf("Score2: %d\n", p[i].score3);
    }
}

void compute_avg(struct players p[], int n)
{
    int i;
    printf("\nAverage scores of players:\n");
    for(i = 0; i < n; i++)
    {
        printf("Player %d: %.2f\n", i + 1, (p[i].score1 + p[i].score2 + p[i].score3)/3.0);
    }
}