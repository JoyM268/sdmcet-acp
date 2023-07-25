//Write a program to copy contents of one file to another
#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp1, *fp2;
    char ch, source[100], destination[100];
    printf("Enter name of the source file: ");
    scanf("%s", source);
    fp1 = fopen(source, "r");
    if(fp1 == NULL) 
    {
        printf("Error opening source file\n");
        exit(1);
    }
    printf("Enter the name of the destination file: ");
    scanf("%s", destination);
    fp2 = fopen(destination, "w");
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
