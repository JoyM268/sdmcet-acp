// Balanced Parenthesis
#include<stdio.h>
#include<string.h>
#define MAX 50

struct stack{
  int top;se
  char stk[MAX];
} s;

void push(int d)
{
  if(s.top == MAX - 1)
  {
    printf("Stack overflow\n");
    return;
  }
  s.top++;
  s.stk[s.top] = d;
}

int pop()
{
  if(s.top == -1)
  {
    printf("Stack Underflow\n");
    return -1;
  }
  int d;
  d = s.stk[s.top];
  s.top--;
  return d;
}

int check_pair(int val1, int val2)
{
   return((val1 == '(' && val2 == ')') || (val1 == '{' && val2 == '}') || (val1 == '[' && val2 == ']'));
}

int is_balanced(char arr[], int n)
{
  int i,open_count = 0, close_count = 0;
  for(i = 0; i < n; i++)
  {
    if(arr[i] == '(' || arr[i] == '{' || arr[i] == '[')
    {
      push(arr[i]);
      open_count++;
    }
    else
    {
      if(s.top == -1)
      {
        return 0;
      }
      else
      {
        if(check_pair(s.stk[s.top],arr[i]))
        {
          pop();
          close_count++;
          continue;
        }
        return 0;
      }
    }
  }
  if(open_count != close_count)
  {
    return 0;
  }
  return 1;
}

main()
{
  s.top = -1;
  char arr[] = "(]";
  int len = strlen(arr);
  if(is_balanced(arr, len))
  {
    printf("Balanced\n");
  }
  else
  {
    printf("Not balanced\n");
  }
}