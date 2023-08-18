//Program to capitalize all the first letters of the words in the file
#include<stdio.h>

main()
{
	char ch, fileName[30], prevCh = ' ';
	FILE *fp1, *fp2;
	read:
	printf("Enter the file name: ");
	scanf("%s", fileName);
	if((fp1 = fopen(fileName, "r")) == NULL)
	{
		printf("File doesn't exist\n");
		goto read;
	}
	fp2 = fopen("TEMP", "w");
	while((ch = getc(fp1)) != EOF)
	{
		if((prevCh == ' ') && (ch >= 'a' && ch <= 'z'))
		{
			ch -= 32;
		}
		prevCh = ch;
		putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fp1 = fopen(fileName, "w");
	fp2 = fopen("TEMP", "r");
	while((ch = getc(fp2)) != EOF)
	{
		putc(ch, fp1);
	}
	printf("Changes were successfully made.\n");
	fclose(fp1);
	fclose(fp2);
}
