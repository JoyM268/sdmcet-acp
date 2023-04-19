// Modular program to implement simple calculator 
// Method 1
#include <stdio.h>

void calculator(int, int, char);
main()
{
  int a, b;
  char op;
  printf("Enter the two numbers: ");
  scanf("%i %i",&a,&b);
  getchar();
  printf("Enter the operator(+,-,*,/): ");
  scanf("%c",&op);
  calculator(a, b, op);
}
void calculator(int num1, int num2, char operator)
{
  switch(operator)
  {
    case '+':
      printf("%i + %i = %i\n",num1,num2,num1 + num2);
      break;
    case '-':
      printf("%i - %i = %i\n",num1,num2,num1 - num2);
      break;
    case '*':
      printf("%i x %i = %i\n",num1,num2,num1 * num2);
      break;
    case '/':
      if(num2 == 0)
      {
        printf("Dividing by 0 error\n");
      }
      else
      {
        printf("%i / %i = %.2f",num1,num2,(float)num1/num2);
      }
      break;
    default:
      printf("Invalid Operator\n");
   }   
}