//Write a program that appends one file at the end of another
#include<stdio.h>
#include<stdlib.h>

main()
{
    FILE *fp1, *fp2;
    char ch, file1[100], file2[100];
    printf("Enter the name of file 1: ");
    scanf("%s", file1);
    printf("Enter the name of file 2: ");
    scanf("%s", file2);
    fp1 = fopen(file1, "a");
    fp2 = fopen(file2, "r");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    while((ch = getc(fp2)) != EOF)
    {
        putc(ch, fp1);
    }
    printf("file %s successfully appended into file %s\n", file2, file1);
    fclose(fp1);
    fclose(fp2);
}
