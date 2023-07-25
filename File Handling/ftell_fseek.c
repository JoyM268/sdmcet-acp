//Write a program that uses the functions ftell and fseek.
#include<stdio.h>

main()
{
    FILE *fp;
    long n;
    char c;
    fp = fopen("RANDOM", "w");
    while((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    printf("The number of characters entered: %ld\n", ftell(fp));
    fclose(fp);
    fp = fopen("RANDOM", "r");
    n = 0L;
    while(feof(fp) == 0)
    {
        fseek(fp, n, 0);
        printf("The position of %c is %ld\n", getc(fp), ftell(fp));
        n = n + 5L;
    }
    putchar('\n');
    fseek(fp, -1L, 2);
    do{
        n = getc(fp);
        printf("%c", n);
    }while(!fseek(fp, -2L, 1));
    fclose(fp);
}