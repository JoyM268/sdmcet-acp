#include<stdio.h>
typedef struct customer
{
  char name[20];
  int acc_no;
  float balance;
} customer;
void transaction(customer *);
void display(customer *);
void lowest(customer *);
void highest(customer *);
main()
{
  customer c[5];
  int i, choice;
  for(i = 0; i < 5; i++)
  {
    printf("Enter name of customer %i: ",i+1);
    scanf("%[^\n]",c[i].name);
    printf("Enter account number of customer %i: ",i+1);
    scanf("%i",&c[i].acc_no);
    printf("Enter balance of customer %i: ",i+1);
    scanf("%f",&c[i].balance);
    getchar();
    printf("\n");
  }
  do
  {
     printf("\nMain Menu\n"); 
     printf("1.Disply Account Details\n"); 
     printf("2.Transaction Menu\n"); 
     printf("3.Lowest Balance\n"); 
     printf("4.Highest Balance\n"); 
     printf("5.Exit\n"); 
     printf("Enter the choice(1,2,3,4,5): "); 
     scanf("%i",&choice);
     switch(choice)
     {
       case 1:
         display(c);
         break;
       case 2:
         transaction(c);
         break;
       case 3:
         lowest(c);
         break;
       case 4:
         highest(c);
         break;
       case 5:
         printf("\nExiting....\n");
         break;
       default:
         printf("\nInvalid Choice\n");
         break;
     }
  }
  while(choice != 5);
}
void display(customer *ptr)
{
  int acc, i, flag = 0;
  printf("\nEnter the Account number of customer: ");
  scanf("%i", &acc);
  for(i = 0; i < 5; i++)
  {
    if((ptr + i) -> acc_no == acc)
    {
      flag = 1;
      break;
    }
  }
  if(flag == 1)
  {
    printf("\nName: %s\n", (ptr + i) -> name);
    printf("Account number: %i\n", (ptr + i) -> acc_no);
    printf("Balance: %.2f\n", (ptr + i) -> balance);
  }
  else
  {
    printf("\nInvalid account number\n");
  }
  return;
}
void lowest(customer *ptr)
{
  float amt = ptr -> balance;
  int i;
  for(i = 1; i < 5; i++)
  {
    if(amt > (ptr + i) -> balance)
    {
      amt = (ptr + i) -> balance;
    }
  }
  for(i = 1; i < 5; i++)
  {
    if(amt == (ptr + i) -> balance)
    {
      printf("\nLowest Balance\n");
      printf("Name: %s\n", (ptr + i) -> name);
      printf("Account number: %i\n", (ptr + i) -> acc_no);
      printf("Balance: %.2f\n", (ptr + i) -> balance);
      break;
    }
  }
  return;
}
void highest(customer *ptr)
{
  float amt = ptr -> balance;
  int i;
  for(i = 1; i < 5; i++)
  {
    if(amt < ((ptr + i) -> balance))
    {
      amt = (ptr + i) -> balance;
    }
  }
  for(i = 1; i < 5; i++)
  {
    if(amt == (ptr + i) -> balance)
    {
      printf("\nHighest Balance\n");
      printf("Name: %s\n", (ptr + i) -> name);
      printf("Account number: %i\n", (ptr + i) -> acc_no);
      printf("Balance: %.2f\n", (ptr + i) -> balance);
      break;
    }
  }
  return;
}
void transaction(customer *ptr)
{
  int i, acc, flag = 0, choice;
  float withdraw = 0.0, deposit = 0.0;
  while(flag == 0)
  {
    printf("\nEnter the Account number of customer: ");
    scanf("%i", &acc);
    for(i = 0; i < 5; i++)
    {
      if((ptr + i) -> acc_no == acc)
      {
        flag = 1;
        break;
      }
    }
    if(flag == 0)
    {
      printf("\nInvalid account number\n");
    }
  }
  do 
  { 
    printf("\nTransaction Menu\n"); 
    printf("1.check account balance\n"); 
    printf("2.deposit amount\n"); 
    printf("3.withdraw\n"); 
    printf("4.Go Back to main menu\n"); 
    printf("Enter the choice(1,2,3,4): "); 
    scanf("%i",&choice);
    switch(choice)
    {
      case 1:
        printf("\nBalance: %.2f\n", (ptr + i) -> balance);
        break;
      case 2:
        printf("\nEnter the amount to be deposited: ");
        scanf("%f", &deposit);
        (ptr + i) -> balance += deposit;
        printf("%.2f successfully deposited in your account\n", deposit);
        printf("Balance: %.2f\n", (ptr + i) -> balance);
        break;
      case 3:
        printf("\nEnter the amount to be withdrawn: ");
        scanf("%f", &withdraw);
        if((ptr + i) -> balance < withdraw)
        {
          printf("Insufficient balance\n");
        }
        else
        {
          (ptr + i) -> balance -= withdraw;
          printf("%.2f successfully withdrawn from your account\n", withdraw);
          printf("Balance: %.2f\n", (ptr + i) -> balance);
        }
        break;
      case 4:
        printf("\nReturning to the main menu...\n");
        break;
      default:
        printf("\nInvalid Choice\n");
        break;
    }
  }
  while(choice != 4);
  return;
}
