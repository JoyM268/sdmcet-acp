//Program to perform insertoion and deletion operation on a array
#include<stdio.h>
#define MAX 50

void insertion(int *arr, int *n, int ele, int index)
{
    int i;
    for(i = *n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    *n = *n + 1;
}

int deletion(int *arr, int *n, int index)
{
    int i, ele = arr[index];
    for(i = index; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    *n = *n - 1;
    return ele;
}

void display(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

main()
{
    int n, arr[MAX], ele, index, i, operation;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    do{
        printf("\nOperations:\n");
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter the operation to be performed(1, 2, 3, 4): ");
        scanf("%d",&operation);
        switch(operation)
        {
            case 1:
                if(n == MAX)
                {
                    printf("The array is full\n");
                }
                else
                {
                    printf("Enter the element and the index to be inserted: ");
                    scanf("%d %d",&ele, &index);
                    if(index >= 0 && index <= n)
                    {
                        insertion(arr, &n, ele, index);
                        printf("%d successfully inserted at index %d\n", ele, index);
                    }
                    else
                    {
                        printf("Invalid index\n");
                    }
                }
                break;
            case 2:
                if(n == 0)
                {
                    printf("The array is empty");
                }
                else
                {
                    printf("Enter the index of the element to be inserted\n");
                    scanf("%d", &index);
                    if(index >= 0 && index < n)
                    {
                        ele = deletion(arr, &n, index);
                        printf("Element %d successfully deleted at index %d\n",ele, index);
                    }
                    else
                    {
                        printf("Invalid index\n");
                    }
                }
                break;
            case 3: 
                if(n == 0)
                {
                    printf("The array is empty\n");
                }
                else
                {
                    display(arr,n);
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Operation\n");
                break;
        }
    }while(operation != 4);
}