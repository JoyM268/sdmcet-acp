/* C program to store a character string in a block of memory space created by malloc () and then modify the same to store a larger string. */
#include <stdio.h>
#include <stdlib.h>

main() 
{
    char *string;
    int initial_size, new_size;
    printf("Enter the size of the initial string: ");
    scanf("%d", &initial_size);
    string = (char*)malloc((initial_size + 1) * sizeof(char));
    printf("Enter the initial string: ");
    scanf("%s", string);
    printf("The string is: %s\n", string);
    printf("Enter the size of the larger string: ");
    scanf("%d", &new_size);
    string = (char *)realloc(string, (new_size + 1) * sizeof(char));
    printf("Enter the larger string: ");
    scanf("%s", string);
    printf("The larger string is: %s\n", string);
    free(string);
}
