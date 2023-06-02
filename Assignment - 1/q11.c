//Program to add principal diagonal elements of the array(primary and secondary diagonal)
 #include<stdio.h> 
 #include<stdlib.h> 
 #define ROW 15 
 #define COL 15 
  
 void read_matrix(int (*)[COL], int); 
 int primary(int (*)[COL], int); 
 int secondary(int (*)[COL], int); 
  
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
   read_matrix(matrix, m); 
   int p = primary(matrix, m); 
   int s = secondary(matrix, m); 
   printf("The sum of primary diagonal elements: %d\n", p); 
   printf("The sum of secondary diagonal elements: %d\n", s); 
   printf("The sum of primary and secondary diagonal elements: %d\n", p + s); 
 } 
  
 void read_matrix(int (*matrix)[COL], int m) 
 { 
   int i, j; 
   for(i = 0; i < m; i++) 
   { 
     for(j = 0; j < m; j++) 
     { 
       scanf("%d", &matrix[i][j]); 
     } 
   } 
 } 
 int primary(int (*matrix)[COL], int m) 
 { 
   int sum = 0, i; 
   for(i = 0; i < m; i++) 
   { 
     sum += matrix[i][i]; 
   } 
   return sum; 
 } 
  
 int secondary(int (*matrix)[COL], int m) 
 { 
   int sum = 0, i; 
   for(i = 0; i < m; i++) 
   { 
     sum += matrix[i][m - i - 1]; 
   } 
   return sum; 
 }