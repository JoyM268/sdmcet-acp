/* Define a structure data type called time_struct containing three members integer hour, integer minute and integer second. Develop a program that would assign
values to individual members and display and display the time in the following form: 16:40:51.
Modify the above program such that a function is used to input values to the members and another function to display the time. Design a function update that 
would accept the data structure designed and increments time by one second and returns the new time. (If the increment results in  60 seconds, then the second
member is set to zero and the minute member is incremented by one. Then, if the result is 60 minutes, the minute member is set to zero and the hour member is 
incremented by one. Finally when the hour becomes 24, it is set to zero.) */
#include<stdio.h>

struct time_struct{
    int hour, minute, second;
};

void readTime(struct time_struct *);
void printTime(struct time_struct *);
void updateTime(struct time_struct *);
main()
{
    struct time_struct t;
    readTime(&t);
    printf("Time before update:\n");
    printTime(&t);
    updateTime(&t);
    printf("Time after update:\n");
    printTime(&t);
}

void readTime(struct time_struct *t)
{
    printf("Enter the hour: ");
    scanf("%d", &t -> hour);
    printf("Enter the minute: ");
    scanf("%d", &t -> minute);
    printf("Enter the second: ");
    scanf("%d", &t -> second);
}

void printTime(struct time_struct *t)
{
    printf("%d:%d:%d\n", t -> hour, t -> minute, t -> second);
}

void updateTime(struct time_struct *t)
{
    t -> second += 1;
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
