// Modular program to implement simple calculator 
// Method 2
#include <stdio.h>

int add(int, int);
int sub(int, int);
int product(int, int);
int quotient(int, int);
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
    result = add(a,b);
  }
  else if(op == '-')
  {
    result = sub(a,b);
  }
  else if(op == '*')
  {
    result = product(a,b);
  }
  else if(op == '/')
  {
    if(b == 0)
    {
      printf("Dividing by 0 error\n");
      return 0;
    }
    else
    {
      printf("%i %c %i = %.2f\n",a,op,b,(float)a/b);
      return 0;
    }
  }
  else
  {
    printf("Invalid Operator\n");
    return 0;
  }
  printf("%i %c %i = %i\n",a,op,b,result);
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
int quotient(int a, int b)
{
  return a / b;
}