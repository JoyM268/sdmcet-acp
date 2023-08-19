//Write a modular C program to print the sum of primary diagonal elements using pointer notations.
 #include<stdio.h> 
 #include<stdlib.h> 
 #define ROW 15 
 #define COL 15 
  
 void readMatrix(int (*)[COL], int); 
 int primarySum(int (*)[COL], int); 
 main() 
 { 
   int matrix[ROW][COL], m, n; 
   printf("Enter the order of matrix: "); 
   scanf("%d %d", &m, &n); 
   if(m != n) 
   { 
     printf("Error: It is not a square matrix\n"); 
     exit(0); 
   } 
   printf("Enter %d elements:\n", m*n); 
   readMatrix(matrix, m); 
   int p = primarySum(matrix, m); 
   printf("The sum of primary diagonal elements: %d\n", p); 
 } 
  
 void readMatrix(int (*matrix)[COL], int m) 
 { 
   int i, j; 
   for(i = 0; i < m; i++) 
   { 
     for(j = 0; j < m; j++) 
     { 
       scanf("%d", (*(matrix + i) + j)); 
     } 
   } 
 } 
 int primarySum(int (*matrix)[COL], int m) 
 { 
   int sum = 0, i; 
   for(i = 0; i < m; i++) 
   { 
     sum += *(*(matrix + i) + i); 
   } 
   return sum; 
 } 