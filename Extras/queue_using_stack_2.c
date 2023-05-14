// here enqueue is costly
#include<stdio.h>
#define MAX 20

typedef struct{
    int top;
    int s[MAX];
} stack;

void enqueue(stack *s1, stack *s2, int ele)
{
    if(s1 -> top == -1)
    {
        s1 -> s[++s1 -> top] = ele;
    }
    else
    {
        while(s1 -> top != -1)
        {
            s2 -> s[++s2 -> top] = s1 -> s[s1 -> top--];
        }
        s1 -> s[++s1 -> top] = ele;
        while(s2 -> top != -1)
        {
            s1 -> s[++s1 -> top] = s2 -> s[s2 -> top--];
        }
    }
}

int dequeue(stack *stk)
{
    int ele;
    ele = stk -> s[stk -> top--];
    return ele;
}

void display(stack *stk)
{
    int i;
    for(i = stk -> top; i >= 0; i--)
    {
        printf("%d ", stk -> s[i]);
    }
}

main()
{
    int operation, ele;
    stack s1, s2;
    s1.top = -1;
    s2.top = -1;
    do{
        printf("\nOperations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter the operation to be performed: ");
        scanf("%d", &operation);
        switch(operation)
        {
            case 1: 
                if(s1.top == MAX - 1)
                {
                    printf("The Queue is full\n");
                }
                else
                {
                    printf("Enter the element: ");
                    scanf("%d", &ele);
                    enqueue(&s1, &s2, ele);
                }
                break;
            case 2:
                if(s1.top == -1)
                {
                    printf("The Queue is empty\n");
                }
                else
                {
                   ele = dequeue(&s1);
                   printf("Element %d deleted from the queue\n", ele);
                }
                break;
            case 3:
                if(s1.top == -1)
                {
                    printf("The Queue is empty\n");
                }
                else
                {
                    printf("The elements in the queue are: ");
                    display(&s1);
                    printf("\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid operation\n");
                break;
        } 
    } while(operation != 4);
}