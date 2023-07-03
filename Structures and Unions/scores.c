//Program to read and display the scores of a player and also compute the average score of the player in a game. Define a structure by the name player and
//members are score1, score2, score3;
#include<stdio.h>

struct player{
    int score1, score2, score3;
};

void read_scores(struct player *);
void print_scores(struct player);
float compute_avg(struct player);
main()
{
    struct player p;
    float avg;
    read_scores(&p);
    print_scores(p);
    avg = compute_avg(p);
    printf("The average score of the player is: %.2f\n", avg);
}

void read_scores(struct player *p)
{
    printf("Enter the scores: ");
    scanf("%d %d %d", &p -> score1, &p -> score2, &p -> score3);
}

void print_scores(struct player p)
{
    printf("Score details:\n");
    printf("Score1: %d\n", p.score1);
    printf("Score2: %d\n", p.score2);
    printf("Score2: %d\n", p.score3);
}

float compute_avg(struct player p)
{
    return (p.score1 + p.score2 + p.score3)/3.0;
}