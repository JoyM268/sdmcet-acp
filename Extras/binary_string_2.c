//Program to find maximum number of binary substring from a given binary string which start and end with 1
#include<stdio.h>
#define SIZE 50

int max_substring(char *);
main()
{
    char str[SIZE];
    printf("Enter the binary input string: ");
    scanf("%s", str);
    int maxSubString = max_substring(str);
    printf("%d", maxSubString);
}

int max_substring(char *str)
{
    int i, j, maxSubString = 0, count_1 = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '1')
        {
            count_1++;
        }
    }
    count_1--;
    while(count_1 > 0)
    {
        maxSubString += count_1;
        count_1--;
    }
    return maxSubString;
}