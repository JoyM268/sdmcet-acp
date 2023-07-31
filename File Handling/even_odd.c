/* A file name DATA contains a series of integer numbers. Code a program to read these numbers and then write all 'odd' numbers to a file to be called ODD and
all 'even' numbers to a file to be called EVEN */

#include<stdio.h>

main()
{
    FILE *fp1, *fp2, *fp3;
    int i, number;
    printf("Contents of DATA file\n\n");
    fp1 = fopen("DATA", "w");
    for(i = 0; i < 30; i++)
    {
        scanf("%d", &number);
        if(number == -1) break;
        putw(number, fp1);
    }
    fclose(fp1);
    fp1 = fopen("DATA", "r");
    fp2 = fopen("ODD", "w");
    fp3 = fopen("EVEN", "w");
    while((number = getw(fp1)) != EOF)
    {
        if(number % 2 == 0)
        {
            putw(number, fp3);
        }
        else
        {
            putw(number, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp2 = fopen("ODD", "r");
    fp3 = fopen("EVEN", "r");
    printf("\n\nContents of ODD file\n\n");
    while((number = getw(fp2)) != EOF)
    {
        printf("%4d", number);
    }
    printf("\n\nContents of EVEN file\n\n");
    while((number = getw(fp3)) != EOF)
    {
        printf("%4d", number);
    }
    fclose(fp2);
    fclose(fp3);
}
