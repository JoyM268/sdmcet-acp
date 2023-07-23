/* Define a structure called cricket that will contain player name, team name and batting average as its members. Using cricket, write a C program to read the information about 50 players
into an array Players and print a teamwise list containing name of players with their batting average */
#include<stdio.h>
#include<string.h>
#define SIZE 50

struct cricket{
    char player_name[30];
    char team_name[30];
    float batting_average;
};

void read(struct cricket *);
void swap(struct cricket *, struct cricket *);
void sort(struct cricket *);
void print(struct cricket *);
main()
{
    struct cricket players[SIZE];
    read(players);
    sort(players);
    print(players);
}

void read(struct cricket *players)
{
    int i;
    printf("Enter the player details:\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter the name, team and batting average of player %d: ", i + 1);
        scanf("%s %s %f", players[i].player_name, players[i].team_name, &players[i].batting_average); 

    }
}

void swap(struct cricket *p1, struct cricket *p2)
{
    struct cricket temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void sort(struct cricket *players)
{
    int i, j;
    for(i = 0; i < SIZE - 1; i++)
    {
        for(j = 0; j < SIZE - i - 1; j++)
        {
            if(strcmp(players[j].team_name, players[j+1].team_name) > 0)
            {
                swap(&players[j], &players[j + 1]);
            }
        }
    }
}

void print(struct cricket *players)
{
    int i, flag = 1;
    for(i = 0; i < SIZE; i++)
    {
        if(flag == 1)
        {
            printf("\nTeam Name: %s\n", players[i].team_name);
            printf("Player Name\tBatting Average\n");
            flag = 0;
        }
        printf("%s\t\t%.2f\n", players[i].player_name, players[i].batting_average);
        if(strcmp(players[i].team_name, players[i + 1].team_name))
        {
            flag = 1;
        }
    }
}