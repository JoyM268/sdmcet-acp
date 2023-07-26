//Write a program to compute two files and returns 0 if they are equal and 1 is they are not
#include<stdio.h>
#include<stdlib.h>

int compare_files(FILE *fp1, FILE *fp2)
{
    char ch1, ch2;
    do
    {
        ch1 = getc(fp1);
        ch2 = getc(fp2);
        if(ch1 != ch2)
        {
            return 1;
        }
    } while(ch1 != EOF && ch2 != EOF);
    if(ch1 == EOF && ch2 == EOF) return 0;
    return 1;
}

main()
{
    FILE *fp1, *fp2;
    char file1[100], file2[100];
    printf("Enter the name of file 1: ");
    scanf("%s", file1);
    printf("Enter the name of file 2: ");
    scanf("%s", file2);
    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    if(compare_files(fp1, fp2) == 0)
    {
        printf("The files are equal\n");
    }
    else
    {
        printf("The files are not equal\n");
    }
    fclose(fp1);
    fclose(fp2);
}