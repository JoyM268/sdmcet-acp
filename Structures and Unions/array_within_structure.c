//Program containing structure by name marks with the members of array of subject and total. calculate the total marks of a student and total of each subject marks obtained by student
#include<stdio.h>

main() 
{ 
    struct marks 
    { 
        int sub[3]; 
        int total; 
    }; 
    struct marks student[3] = {45,67,81,0,75,53,69,0,57,36,71,0}; 
    struct marks total = {0}; 
    int i,j; 
    for(i = 0; i <= 2; i++) 
    { 
        for(j = 0; j <= 2; j++) 
        { 
            student[i].total += student[i].sub[j]; 
            total.sub[j] += student[i].sub[j]; 
        } 
        total.total += student[i].total; 
    }   
    printf("STUDENT\t\tTOTAL\n"); 
    for(i = 0; i <= 2; i++) 
        printf("Student[%d]\t%d\n", i+1, student[i].total); 
    printf("\nSUBJECT\t\tTOTAL\n"); 
    for(j = 0; j <= 2; j++) 
        printf("Subject-%d\t%d\n", j+1, total.sub[j]); 
    printf("\nGrand Total = %d\n", total.total); 
 }