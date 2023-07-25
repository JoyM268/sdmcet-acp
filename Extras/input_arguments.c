//Program to take arguments from command line and save it in given file
#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
    FILE *fp;
    char words[50];
    int i;
    if(argc < 3)
    {
        printf("Insufficient commands\n");
        exit(1);
    }
    fp = fopen(argv[1], "w");
    for(i = 2; i < argc; i++)
    {
        fprintf(fp, "%s ", argv[i]);
    }
    fclose(fp);
    fp = fopen(argv[1], "r");
    printf("The words stored in file are: ");
    for(i = 2; i < argc; i++)
    {
        fscanf(fp, "%s", &words);
        fprintf(stdout, "%s ", words);
    }
    fclose(fp);
}
