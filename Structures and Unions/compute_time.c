//Program to compute value of time given in seconds in terms of hours, minutes and seconds in the form HH:MM:SS
#include<stdio.h>

struct time{
    int seconds, minutes, hours;
};

void print_time(struct time *t);
void compute_time(struct time *t, int total_seconds);
main()
{
    int total_seconds;
    struct time t;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    compute_time(&t, total_seconds);
    print_time(&t);
}

void print_time(struct time *t)
{
    printf("The time is:\n");
    printf("%d : %d : %d\n", t -> hours, t -> minutes, t -> seconds);
}

void compute_time(struct time *t, int total_seconds)
{
    t -> hours = total_seconds / 3600;
    total_seconds %= 3600;
    t -> minutes = total_seconds / 60;
    total_seconds %= 60;
    t -> seconds = total_seconds;
}