// Progarm to demonstrate the address & the value of pointer variable
#include <stdio.h>
main()
{
  int x,y,*ptr;
  ptr = &x;
  x = 10;
  y = *ptr;
  printf("Value of x is %d\n",x);
  printf("%d is stored at address = %p\n",*&x,&x);
  printf("%d is stored at address = %p\n",*ptr,ptr);
  printf("%u is stored at address = %p\n",ptr,&ptr);
  *ptr = 25;
  printf("x = %d\n",x);
}
