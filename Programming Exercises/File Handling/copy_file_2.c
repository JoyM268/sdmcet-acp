//Write a program to copy contents of one file to another using command line arguments
#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch;
    if(argc != 3)
    {
        printf("Insufficient arguments\n");
        exit(1);
    }
    fp1 = fopen(argv[1], "r");
    if(fp1 == NULL)
    {
        printf("Error opening source file\n");
        exit(1);
    }
    fp2 = fopen(argv[2], "w");
    if(fp2 == NULL)
    {
        printf("Error opening destination file\n");
        exit(1);
    }
    while((ch = getc(fp1)) != EOF)
    {
        putc(ch, fp2);
    }
    printf("File copied successfully.\n");
    fclose(fp1);
    fclose(fp2);
}