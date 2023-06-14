//What is the output of the following code ?
#include<stdio.h>

main()
{
    int m[2], *p = m;
    m[0] = 100;
    m[1] = 200;
    printf("%d%d", ++*p, *(p+1));
}

//Output: 101200