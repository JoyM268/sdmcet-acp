/* Write a program that prompts the user for two files, one containing a line of text known as source file and other, an empty file known as target file 
and then copies the contents of source file into target file.
Modify the program so that a specified deleteChar is deleted from the source file as it is copied to the target file */
#include<stdio.h>
#include<stdlib.h>

main()
{
    FILE *fp1, *fp2, *fp3;
    char sourceFile[100], targetFile[100], deleteChar, ch;
    printf("Enter the name of source file: ");
    scanf("%s", sourceFile);
    if((fp1 = fopen(sourceFile, "r")) == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    printf("Enter the name of target file: ");
    scanf("%s", targetFile);
    fp2 = fopen(targetFile, "w");
    fp3 = fopen("TEMP", "w");
    getchar();
    printf("Enter the character to be deleted from the source file: ");
    scanf("%c", &deleteChar);
    while((ch = getc(fp1)) != EOF)
    {
        putc(ch, fp2);
        if (ch != deleteChar)
        {
            putc(ch, fp3);
        }
    }
    printf("Contents of source file successfully copied to target file\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp1 = fopen(sourceFile, "w");
    fp3 = fopen("TEMP", "r");
    while((ch = getc(fp3)) != EOF)
    {
        putc(ch, fp1);
    }
    printf("Character \"%c\" successfully deleted from source file\n", deleteChar);
    fclose(fp1);
    fclose(fp3);
}