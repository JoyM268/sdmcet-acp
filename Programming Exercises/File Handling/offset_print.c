/* Write a program that requests for file name and an integer, known as offset value. The program then reads the file starting from the location specified by
the offset value and prints the contents on the screen. */
/* Note: if the offset value is a positive integer, then printing skips that many lines. if it is a negative number, it prints that many lines from the end of
 file. An appropriate error message should be printed, if anything goes wrong. */
#include<stdio.h>
#include<stdlib.h>

main()
{
    FILE *fp;
    long offset;
    char fileName[100], ch;
    printf("Enter the file name: ");
    scanf("%s", fileName);
    if((fp = fopen(fileName, "r")) == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    printf("Enter the offset value: ");
    scanf("%ld", &offset);
    if(offset > 0)
    {
        fseek(fp, offset, 0);
    }
    else
    {
        fseek(fp, offset, 2);
    }
    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
    }
    fclose(fp);
}