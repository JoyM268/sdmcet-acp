#include<stdio.h>
typedef struct customer
{
  char name[20];
  int acc_no;
  float balance;
} customer;
customer c[5];
void transaction();
void highest();
void display();
void lowest();
main()
{
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
        display(); 
        break; 
      case 2: 
        transaction(); 
        break; 
      case 3: 
        lowest(); 
        break; 
      case 4: 
        highest(); 
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
void display()
{
  int acc, i;
  printf("\nEnter the Account number of customer: "); 
  scanf("%i", &acc); 
  for(i = 0; i < 5; i++) 
  { 
     if(acc == c[i].acc_no)
     {
       printf("\nName: %s\n", c[i].name); 
       printf("Account number: %i\n", c[i].acc_no); 
       printf("Balance: %.2f\n", c[i].balance); 
       return;
     }
  } 
  printf("\nInvalid account number\n");  
  return; 
}
void lowest() 
{ 
  float amt = c[0].balance; 
  int i, index; 
  for(i = 1; i < 5; i++) 
  { 
    if(amt > c[i].balance) 
    { 
      amt = c[i].balance;
      index = i;
    } 
  } 
  printf("\nLowest\n"); 
  printf("Name: %s\n", c[index].name); 
  printf("Account number: %i\n", c[index].acc_no); 
  printf("Balance: %.2f\n", c[index].balance); 
}
void highest() 
{ 
  float amt = c[0].balance; 
  int i, index; 
  for(i = 1; i < 5; i++) 
  { 
    if(amt < c[i].balance) 
    { 
      amt = c[i].balance;
      index = i;
    } 
  } 
  printf("\nHighest\n"); 
  printf("Name: %s\n", c[index].name); 
  printf("Account number: %i\n", c[index].acc_no); 
  printf("Balance: %.2f\n", c[index].balance); 
}
void transaction() 
{ 
  int i, acc, flag = 0, choice; 
  float amt; 
  while(flag == 0) 
  { 
    printf("\nEnter the Account number of customer: "); 
    scanf("%i", &acc); 
    for(i = 0; i < 5; i++) 
    { 
      if(c[i].acc_no == acc) 
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
        printf("\nBalance: %.2f\n", c[i].balance); 
        break; 
      case 2: 
        printf("\nEnter the amount to be deposited: "); 
        scanf("%f", &amt); 
        c[i].balance += amt; 
        printf("%.2f successfully deposited in your account\n", amt); 
        printf("Balance: %.2f\n", c[i].balance); 
        break; 
      case 3: 
        printf("\nEnter the amount to be withdrawn: "); 
        scanf("%f", &amt); 
        if(c[i].balance < amt) 
        { 
          printf("Insufficient balance\n"); 
        } 
        else 
        { 
          c[i].balance -= amt; 
          printf("%.2f successfully withdrawn from your account\n", amt); 
          printf("Balance: %.2f\n", c[i].balance); 
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
}