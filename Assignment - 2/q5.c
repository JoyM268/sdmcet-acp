/* Write a C program to perform the following:
a) Define a structure named TIME having fields: hh, mm, ss.
b) read () - reads a time.
c) display() – displays a time.
d) add() – finds the sum of the two timings.
e) diff() – finds the difference of the two timings
*/

#include <stdio.h>

struct TIME 
{
  int hh, mm, ss;
};

void read(struct TIME *);
void display(struct TIME); 
struct TIME add(struct TIME, struct TIME); 
struct TIME diff(struct TIME, struct TIME);
main() 
{
  struct TIME time1, time2, sum, difference;
  printf("Enter time 1:\n");
  read(&time1);
  printf("\nEnter time 2:\n");
  read(&time2);
  printf("\nTime 1 is: ");
  display(time1);
  printf("Time 2 is: ");
  display(time2);
  sum = add(time1, time2);
  difference = diff(time1, time2);
  printf("\nSum of two timings: ");
  display(sum);
  printf("Difference of two timings: ");
  display(difference);
}

void read(struct TIME *time) 
{
  printf("Enter hours: ");
  scanf("%d", &time->hh);
  printf("Enter minutes: ");
  scanf("%d", &time->mm);
  printf("Enter seconds: ");
  scanf("%d", &time->ss);
}

void display(struct TIME time) 
{
  printf("%d:%d:%d\n", time.hh, time.mm, time.ss);
}

struct TIME add(struct TIME time1, struct TIME time2) 
{
    int total_sec, time1_sec, time2_sec;
    struct TIME add;
    time1_sec = time1.hh * 3600 + time1.mm * 60 + time1.ss;
    time2_sec = time2.hh * 3600 + time2.mm * 60 + time2.ss;
    total_sec = time1_sec + time2_sec;
    add.hh = total_sec / 3600;
    total_sec %= 3600;
    add.mm = total_sec / 60;
    add.ss = total_sec % 60;
    return add;
}

struct TIME diff(struct TIME time1, struct TIME time2) 
{
    int total_sec, time1_sec, time2_sec;
    struct TIME diff;
    time1_sec = time1.hh * 3600 + time1.mm * 60 + time1.ss;
    time2_sec = time2.hh * 3600 + time2.mm * 60 + time2.ss;
    total_sec = time1_sec - time2_sec;
    if(total_sec < 0) total_sec = -total_sec;
    diff.hh = total_sec / 3600;
    total_sec %= 3600;
    diff.mm = total_sec / 60;
    diff.ss = total_sec % 60;
    return diff;
}