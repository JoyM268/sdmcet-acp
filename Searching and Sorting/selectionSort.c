//Program to to implement selection sort on a array of unsorted integers
#include<stdio.h>
#define SIZE 50

void readArray(int  *, int);
void printArray(int *, int);
void swap(int *, int *);
void sort(int *, int);
main()
{
	int arr[SIZE], n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	readArray(arr, n);
	printf("The array before sorting: ");
	printArray(arr, n);
	sort(arr, n);
	printf("\nThe array after sorting: ");
	printArray(arr, n);
	printf("\n");
}

void readArray(int *arr, int n)
{
	int i;
	printf("Enter %d elements: ", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void printArray(int *arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void sort(int *arr, int n)
{
	int i, j, min;
	for(i = 0; i < n - 1; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}				
		if(min != i)
		{
			swap(&arr[min], &arr[i]); 
		}
	}
}
