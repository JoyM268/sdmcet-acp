// Write a C program to input a list of numbers within the range 0-4 from the user and then find the frequency of each of them.
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *num, *freq, i, size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    num = (int *)malloc(size * sizeof(int));
    printf("Enter the numbers:\n");
    for(i = 0; i < size; i++)
    {
        printf("Enter num[%d]: ", i);
        scanf("%d", &num[i]);
        if(num[i] < 0 || num[i] > 4)
        {
            printf("The number should be within the range of (0 - 4)\n");
            i--;
            continue;
        }
    }
    freq = (int *)calloc(5, sizeof(int));
    for(i = 0; i < size; i++)
    {
        freq[num[i]]++;
    }
    printf("The frequencies of the number are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Frequency[%d] = %d\n", i, freq[i]);
    }
    free(num);
    free(freq);
}
