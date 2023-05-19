// Program to find length of string and to print its corresponding address of the string without using built in function
#include<stdio.h>

main()
{
    char *name;
    int length;
    name = "Shimoga";
    char *ptr = name;
    printf("%s\n", name);
    while(*ptr != '\0')
    {
        printf("%c stored at address %p\n", *ptr, ptr);
        ptr++;
    }
    length = ptr - name;
    printf("length = %d\n", length);
}