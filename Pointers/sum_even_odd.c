//Program to find the sum of the even numbers and the odd numbers in an array using pointers
#include<stdio.h>

void sum(int*,int);
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
    }
    sum(a,n);
    return 0;
}

void sum(int *p,int n)
{
    int i,even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(*p % 2 != 0)
        {
            odd = odd + (*p);
            p++;
        }
        else
        {
            even = even + (*p);
            p++;
        }
    }
    printf("The sum of the even numbers is %d\n",even);
    printf("The sum of the odd numbers is %d\n",odd);
}