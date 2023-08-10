/* Define a structure called cricket that will describe the following information:
	player name
	team name
	batting average
Using cricket, declare an array player with 50 elements and write a program to read the information about all the 
50 players and print a team-wise list containing names of players with their batting average. */
#include<stdio.h>
#include<string.h>
#define SIZE 50

struct cricket{
	char playerName[30];
	char teamName[30];
	float battingAvg;
};

void readInfo(struct cricket *);
void swapPlayer(struct cricket *, struct cricket *);
void sortPlayer(struct cricket *);
void printTeamWise(struct cricket *);
main()
{
	struct cricket player[SIZE];
	readInfo(player);
	sortPlayer(player);
	printTeamWise(player);
}

void readInfo(struct cricket *p)
{
	int i; 
	for(i = 0; i < SIZE; i++)
	{
		printf("Enter the player name, team name and batting avg of player %d: ", i+1);
		scanf("%s %s %f", p[i].playerName, p[i].teamName, &p[i].battingAvg);
	}
}

void swapPlayer(struct cricket *a, struct cricket *b)
{
	struct cricket temp = *a;
	*a = *b;
	*b = temp;
}

void sortPlayer(struct cricket *p)
{
	int i, j;
	for(i = 0; i < SIZE - 1; i++)
	{
		for(j = 0; j < SIZE - i - 1; j++)
		{
			if(strcmp(p[i].teamName, p[i + 1].teamName) > 0)
			{
				swapPlayer(&p[i], &p[i+1]);
			}
		}
	}
}

void printTeamWise(struct cricket *p)
{
	int i, flag = 1;
	for(i = 0; i < SIZE; i++)
	{
		if(flag == 1)
		{
			printf("\nTeam name: %s\n", p[i].teamName);
			printf("Player Name\tBatting Average\n");
			flag = 0;
		}
		printf("%s\t\t%.2f\n", p[i].playerName, p[i].battingAvg);
		if(strcmp(p[i].teamName, p[i+1].teamName) != 0)
		{
			flag = 1;
		}
	}
}
