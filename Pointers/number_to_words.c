//Program to convert the given number to words
#include<stdio.h>

int reverse(int);
void num_to_word(int);
main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("The number in words is:\n");
  num_to_word(num);
}

int reverse(int num)
{
  int rev = 0;
  while(num > 0)
  {
    rev = rev * 10 + (num % 10);
    num /= 10;
  }
  return rev;
}

void num_to_word(int num)
{
  char *words[10] = {"Zero", "One", "Two", "Three", "Four", "Five",
                "Six", "Seven", "Eight", "Nine"};
  int rev = reverse(num);
  while(rev > 0)
  {
    printf("%s ", words[rev % 10]);
    rev /= 10;
  }
  printf("\n");
}