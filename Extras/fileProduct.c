//Program to find the product of all the integers in the file and print in both file and console 
#include<stdio.h>

main()
{
	FILE *fp;
	int i, n, num, product = 1;
	fp = fopen("NUMBERS", "w");
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num);
		fprintf(fp, "%d ", num);
	}
	fclose(fp);
	fp = fopen("NUMBERS", "r");
	printf("The contents of the file are:\n");
	for(i = 0; i < n; i++)
	{
		fscanf(fp, "%d", &num);
		printf("%d ", num);
		product *=  num;
	}
	printf("\nThe product of all numbers in the file is: %d\n", product);
	fclose(fp);
	fp = fopen("NUMBERS", "a");
	fprintf(fp, "\nThe product of all numbers in the file is: %d\n", product);
	fclose(fp);
}
