#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<malloc.h>

main()
{
  char *buffer;
  if((buffer = (char *)malloc(10)) == NULL)
  {
    printf("Malloc failed.\n");
    exit(1);
  }
  //printf("Buffer of size %d created\n", _msize(buffer));
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