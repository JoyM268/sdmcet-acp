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
    int i, j, maxSubString = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '0')
        {
            continue;
        }
        else
        {
            for(j = i + 1; str[j] != '\0'; j++)
            {
                if(str[j] == '1')
                {
                    maxSubString++;
                }
            }
        }
    }
    return maxSubString;
}