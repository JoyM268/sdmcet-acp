/* Write a modular C program to sort the given marks of ‘n’
students in the course of C-programming. (use any sorting 
techniques) */
  
#include<stdio.h>
#define SIZE 50

void sort_marks(int *, int); 
void read_marks(int *, int); 
void print_marks(int *, int); 
main() 
{ 
  int marks[SIZE], n; 
  printf("Enter the number of students: "); 
  scanf("%d", &n); 
  printf("Enter the marks of student in C programming:\n", n); 
  read_marks(marks, n); 
  printf("Marks after sorting:\n"); 
  sort_marks(marks, n); 
  print_marks(marks, n);     
} 
  
void sort_marks(int *marks, int n) 
{ 
  int i, j, key; 
  for(i = 1; i < n; i++) 
  { 
    key = marks[i]; 
    j = i - 1; 
    while(j >= 0 && marks[j] > key) 
    { 
      marks[j + 1] = marks[j]; 
      j = j - 1; 
    } 
    marks[j + 1] = key; 
  } 
} 
  
void read_marks(int *marks, int n) 
{ 
  int i;  
  for(i = 0; i < n; i++) 
  { 
    printf("Student %d: ", i + 1);
    scanf("%d", &marks[i]); 
  } 
} 
  
void print_marks(int *marks, int n) 
{ 
  int i;  
  for(i = 0; i < n; i++) 
  { 
    printf("%d ", marks[i]); 
  } 
  printf("\n"); 
}