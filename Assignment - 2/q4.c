/* Write a C program to perform the following: 
a) Define a structure named COMPLEX having fields: real, imag. 
b) read ( ) - reads a complex number. 
c) display( ) – displays a complex number. 
d) Add ( ) – finds the sum of the two complex numbers. 
e) Diff ( ) – finds the difference between the two complex numbers.
*/
#include<stdio.h> 
  
struct COMPLEX
{ 
  int real, imag; 
}; 
  
void read(struct COMPLEX *); 
void display(struct COMPLEX); 
void add(struct COMPLEX, struct COMPLEX); 
void diff(struct COMPLEX, struct COMPLEX); 
main() 
{ 
  struct COMPLEX c1, c2;
  read(&c1); 
  read(&c2);
  printf("The complex number 1 is:\n");
  display(c1); 
  printf("The complex number 2 is:\n");
  display(c2); 
  add(c1, c2); 
  diff(c1, c2); 
} 
  
void read(struct COMPLEX *c)
{ 
  printf("Enter complex number of the form a + ib: "); 
  scanf("%d %d", &c -> real, &c -> imag); 
} 
  
void display(struct COMPLEX c) 
{ 
  printf("%d + i%d\n", c.real, c.imag); 
} 
  
void add(struct COMPLEX c1, struct COMPLEX c2) 
{ 
  struct COMPLEX c;
  c.real = c1.real + c2.real; 
  c.imag = c1.imag + c2.imag; 
  printf("The sum of 2 complex numbers is = %d + i%d\n", c.real, c.imag); 
} 
  
void diff(struct COMPLEX c1, struct COMPLEX c2) 
{ 
  struct COMPLEX c;
  c.real = c1.real - c2.real; 
  c.imag = c1.imag - c2.imag; 
  printf("The difference of 2 complex numbers is = %d + i%d\n", c.real, c.imag); 
}