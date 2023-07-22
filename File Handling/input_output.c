// Program to read data from the keyboard, write it to a file called INPUT, again read the same data from the file INPUT and displayit on the screen
#include<stdio.h>

main()
{
    FILE *fp;
    char c;
    printf("Data Input\n\n");
    fp = fopen("INPUT", "w");
    while((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    printf("\nData Output\n\n");
    fp = fopen("INPUT", "r");
    while((c = getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
}
