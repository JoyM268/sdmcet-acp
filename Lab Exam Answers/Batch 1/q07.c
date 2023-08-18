/* Write a C program to read data from the keyboard and write to a file called INPUT, again read the same data from the INPUT file, and count the number of lines 
in the file and print the same on the screen */
#include<stdio.h>

main()
{
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("INPUT", "w");
    printf("Enter the input data:\n");
    while((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("INPUT", "r");
    printf("\nThe data in the file is:\n");
    while((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
        if(ch == '\n') count++;     
    }
    printf("\nThe number of lines in the file: %d\n", count);
    fclose(fp);
}