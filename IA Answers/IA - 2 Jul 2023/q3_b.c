/* Define a structure called Time containing 3 members integer hour, integer minute and integer second.
Write a c program to read the current time in terms of minutes and seconds which are the structure members 
and print the updated time which is incremented by 1 second in the following format hh : mm : ss by calling 
the update function that would accept the struct Time and return the new time */

#include<stdio.h>

struct Time{
    int hour, minute, second;
};

void read(struct Time *);
void update(struct Time *);
void display(struct Time *);
main()
{
    struct Time t;
    read(&t);
    update(&t);
    display(&t);
}

void read(struct Time *t)
{
    printf("Enter the hours: ");
    scanf("%d", &t -> hour);
    printf("Enter the minutes: ");
    scanf("%d", &t -> minute);
    printf("Enter the seconds: ");
    scanf("%d", &t -> second);
}

void update(struct Time *t)
{
    (t -> second)++;
    if(t -> second == 60)
    {
        t -> second = 0;
        t -> minute += 1;
    }
    if(t -> minute == 60)
    {
        t -> minute = 0;
        t -> hour += 1;
    }
    if(t -> hour == 24)
    {
        t -> hour = 0;
    }
}

void display(struct Time *t)
{
    printf("Time = %d:%d:%d\n", t -> hour, t -> minute, t -> second);
}