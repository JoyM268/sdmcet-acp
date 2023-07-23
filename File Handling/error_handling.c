// Program to illustrate error handling in file operations
#include<stdio.h>

main()
{
    int i, number;
    char *filename;
    FILE *fp1, *fp2;
    fp1 = fopen("TEST", "w");
    for(i = 10; i <= 100; i += 10)
    {
        putw(i, fp1);
    }
    fclose(fp1);
    printf("\nInput Filename\n");
    open_file:
    scanf("%s", filename);
    if((fp2 = fopen(filename, "r")) ==  NULL)
    {
        printf("Cannot open the file.\n");
        printf("Type filename again.\n");
        goto open_file;
    }
    else
    {
        for(i = 1; i <= 20; i++)
        {
            number = getw(fp2);
            if(feof(fp2))
            {
                printf("Ran out of data.\n");
                break;
            }
            else
            {
                printf("%d\n", number);
            }
        }
    }
    fclose(fp2);
}