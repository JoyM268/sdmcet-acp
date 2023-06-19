/* Write a function maxmin() which returns maximum and minimum element of a given list of 'n' elements. Use this function to compute highest and lowest marks of 
 'n', students in a particular course. Process the array elements using pointers */ 
 #include <stdio.h> 
 #define SIZE 100 
  
 void read_marks(int *, int); 
 int maxmin(int *, int, int *); 
 main()  
 { 
     int marks[SIZE], n, lowest, highest; 
     printf("Enter the number of students: "); 
     scanf("%d", &n); 
     read_marks(marks, n); 
     lowest = maxmin(marks, n, &highest); 
     printf("The lowest marks is %d\n", lowest); 
     printf("The highest marks is %d\n", highest); 
 } 
  
 void read_marks(int *marks, int n) 
 { 
     int i; 
     for(i = 0; i < n; i++) 
     { 
         printf("Enter the marks of student %d: ", i + 1); 
         scanf("%d", (marks + i)); 
     } 
 } 
  
 int maxmin(int *marks, int n, int *highest) 
 { 
     int lowest; 
     lowest = *highest = *marks; 
     int *end = marks + n - 1; 
     marks = marks + 1;
     while(marks <= end) 
     { 
         if(*marks > *highest) 
         { 
             *highest = *marks;   
         } 
         if(*marks < lowest) 
         { 
             lowest = *marks; 
         } 
         marks++; 
     } 
     return lowest; 
 }
