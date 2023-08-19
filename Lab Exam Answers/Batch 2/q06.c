// Write a C program to store a character string in a block of memory space created by malloc () and then modify the same to store a largest string.
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
  char *buffer;
  if((buffer = (char *)malloc(10)) == NULL)
  {
    printf("Malloc failed.\n");
    exit(1);
  }
  strcpy(buffer, "HYDERABAD");
  printf("\nBuffer contains: %s\n", buffer);
  if((buffer = (char *)realloc(buffer, 15)) == NULL)
  {
    printf("Reallocation failed.\n");
    exit(1);
  }
  printf("Buffer size modified.\n");
  printf("\nBuffer still contains: %s\n", buffer);
  strcpy(buffer, "SECUNDERABAD");
  printf("\nBuffer now contains: %s\n", buffer);
  free(buffer);
}