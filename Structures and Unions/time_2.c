// Program to define a structure datatype called time_struct containing
// hour, minutes, seconds.
// Develop a program that would assign values to individual member and display in the pattern
// 20:40:15
//Method 2 (using pointers)
#include<stdio.h>

typedef struct
{
    int hours, minutes, seconds;
} time_struct;

void assign_time(time_struct *);
void print_time(time_struct *);
main()
{
    time_struct time;
    assign_time(&time);
    print_time(&time);
}

void assign_time(time_struct *time)
{
    printf("Enter the hours: ");
    scanf("%d", &time -> hours);
    printf("Enter the minutes: ");
    scanf("%d", &time -> minutes);
    printf("Enter the seconds: ");
    scanf("%d", &time -> seconds);
}

void print_time(time_struct *time)
{
    printf("The time is:\n%d:%d:%d\n", time -> hours, time -> minutes, time -> seconds);
}