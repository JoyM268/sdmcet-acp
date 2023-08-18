/* Write a C program to open a file named EXAMINATION and store in it the following data.:
Student name    IA1  IA2   IA3  CTA  
  AAA           18   17     8    4 
  BBB           12   19     10   8
  CCC           20   15     9    9
Extend the program to read the data from the file and display the examination table with the total marks of each student. */
#include<stdio.h>

main()
{
    FILE *fp;
    int ia1, ia2, ia3, cta, i, total, lowest;
    char studentName[30];
    fp = fopen("EXAMINATION", "w");
    for(i = 0; i < 3; i++)
    {
        printf("Enter the Name, 3 IA marks and CTA marks of student %d: ", i + 1);
        scanf("%s %d %d %d %d", studentName, &ia1, &ia2, &ia3, &cta);
        fprintf(fp, "%s\t\t%d\t%d\t%d\t%d\n", studentName, ia1, ia2, ia3, cta);
    }
    fclose(fp);
    fp = fopen("EXAMINATION", "r");
    printf("Student Name\tIA1\tIA2\tIA3\tCTA\tTotal\n");
    for(i = 0; i < 3; i++)
    {
        fscanf(fp, "%s %d %d %d %d", studentName, &ia1, &ia2, &ia3, &cta);
        lowest = (ia1 < ia2)? ((ia1 < ia3)? ia1 :ia3) : ((ia2 < ia3)? ia2 : ia3);
        total = ia1 + ia2 + ia3 + cta - lowest;
        printf("%s\t\t%d\t%d\t%d\t%d\t%d\n", studentName, ia1, ia2, ia3, cta, total);
    }
    fclose(fp);
}
