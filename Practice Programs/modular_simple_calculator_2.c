// Modular program to implement simple calculator 
// Method 2
#include <stdio.h>

int add(int, int);
int sub(int, int);
int product(int, int);
float quotient(int, int);
main()
{
  int a, b, result;
  char op;
  printf("Enter the two numbers: ");
  scanf("%i %i",&a,&b);
  getchar();
  printf("Enter the operator: ");
  scanf("%c",&op);
  if(op == '+')
  {
    printf("%i + %i = %i\n",a,b,add(a,b));
  }
  else if(op == '-')
  {
    printf("%i + %i = %i\n",a,b,sub(a,b));
  }
  else if(op == '*')
  {
    printf("%i + %i = %i\n",a,b,product(a,b));
  }
  else if(op == '/')
  {
    if(b == 0)
    {
      printf("Dividing by 0 error\n");
      
    }
    else
    {
      printf("%i + %i = %.2f\n",a,b,quotient(a,b));
    }
  }
  else
  {
    printf("Invalid Operator\n");
  }
}
int add(int a, int b)
{
  return a + b;
}
int sub(int a, int b)
{
  return a - b;
}

int product(int a, int b)
{
  return a * b;
}
float quotient(int a, int b)
{
  return (float)a / b;
}