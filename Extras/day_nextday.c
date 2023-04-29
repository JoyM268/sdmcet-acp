//Program to print day and next day using enumeration and struct

#include<stdio.h>
typedef enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec}month;
typedef struct date{
  month m;
  int d;
}date;
int max_days;
void printdate(date *dt)
{
  switch(dt -> m)
  {
    case 0:
      printf("January %i\n",dt -> d);
      max_days = 31;
      break;
    case 1:
      printf("February %i\n",dt -> d);
      max_days = 28;
      break;
    case 2:
      printf("March %i\n",dt -> d);
      max_days = 31;
      break;
    case 3:
      printf("April %i\n",dt -> d);
      max_days = 30;
      break;
    case 4:
      printf("May %i\n",dt -> d);
      max_days = 31;
      break;
    case 5:
      printf("June %i\n",dt -> d);
      max_days = 30;
      break;
    case 6:
      printf("July %i\n",dt -> d);
      max_days = 31;
      break;
    case 7:
      printf("August %i\n",dt -> d);
      max_days = 31;
      break; 
    case 8:
      printf("September %i\n",dt -> d);
      max_days = 30;
      break;
    case 9:
      printf("October %i\n",dt -> d);
      max_days = 31;
      break;
    case 10:
      printf("November %i\n",dt -> d);
      max_days = 30;
      break;
    case 11:
      printf("December %i\n",dt -> d);
      max_days = 31;
      break;
  }
}
void nextday(date *dt)
{
  if(dt -> d == max_days)
  {
    dt -> d = 1;
    dt -> m = (dt -> m + 1) % 12;
  }
  else
  {
    dt -> d = dt -> d + 1;
  }
}
main()
{
  int i;
  date date[] = {{jan, 1}, {feb, 28}, {mar, 14}, {oct, 31}, {dec, 31}};
  for(i = 0; i < 5; i++)
  {
    printf("Day: ");
    printdate(&date[i]);
    printf("Next Day: ");
    nextday(&date[i]);
    printdate(&date[i]);
    printf("\n");
  }
}