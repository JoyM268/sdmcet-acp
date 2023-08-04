/* Write  a function  day_name that receives a  number n and returns  a  pointer to  a  character string containing  the  name  of the  corresponding  day.  
The  day  names  should  be  kept  in  a  static  table of character strings  local  to  the function. */
#include<stdio.h>
#include<stdlib.h>
char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

char *day_name(int n)
{
    if(n < 1 || n > 7)
    {
        return NULL;
    }
    return (char *)(days + n - 1);
}

main()
{
    int n;
    char *day;
    printf("Enter day number: ");
    scanf("%d", &n);
    if((day = day_name(n)) == NULL)
    {
        printf("Invalid day number\n");
        exit(0);
    }
    printf("Day %d is %s\n", n, day);
}