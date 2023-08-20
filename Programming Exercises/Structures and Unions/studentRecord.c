/* Design a structure student_record to Contain name, date of birth and total marks obtained. Use the date structure to represent the date of birth. 
Develop a program to read data for 10 students in a class and list them rank-wise. */
#include<stdio.h>
#define SIZE 10

struct student_record
{
    char name[30];
    struct dob
    {
        int date, month, year;
    } d;
    int totalMarks;
};

void readData(struct student_record *);
void sortRankWise(struct student_record *);
void displayRankWise(struct student_record *);
main()
{
    struct student_record students[SIZE];
    readData(students);
    sortRankWise(students);
    displayRankWise(students);
}

void readData(struct student_record *students)
{
    int i;
    printf("Enter students details:");
    for(i = 0; i < SIZE; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter the Name: ");
        scanf("%s", students[i].name);
        printf("Enter the DOB(DD MM YY): ");
        scanf("%d %d %d", &students[i].d.date, &students[i].d.month, &students[i].d.year);
        printf("Enter the total marks: ");
        scanf("%d", &students[i].totalMarks);
    }
}

void sortRankWise(struct student_record *students)
{
	int i, j;
	struct student_record key;
	for(i = 1; i < SIZE; i++)
	{
		key = students[i];
		j = i - 1;
		while(j >= 0 && students[j].totalMarks < key.totalMarks)
		{
			students[j + 1] = students[j];
			j--;
		}
		students[j + 1] = key;
	}
}


void displayRankWise(struct student_record *students)
{
	int i;
	printf("\nRank\tName\tDOB\t\tTotal Marks\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%d\t%s\t%d/%d/%d \t%d\n", i + 1, students[i].name, students[i].d.date, students[i].d.month, students[i].d.year, students[i].totalMarks);
	}
}