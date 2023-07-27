//Write a program that reads a file containing integers and appends at its end the sum of all the integers
#include<stdio.h>
#include<stdlib.h>

main()
{
    FILE *fp;
    char file[100];
    int n, sum = 0;
    printf("Enter the name of the file: ");
    scanf("%s", file);
    fp = fopen(file, "r");
    if(fp == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    while(fscanf(fp, "%d", &n) == 1)
    {
        sum += n;
    }
    fclose(fp);
    fp = fopen(file, "a");
    fprintf(fp,"\nThe sum of all integers: %d\n", sum);
    printf("Sum of all integers appended to the file successfully.\n");
    fclose(fp);
}