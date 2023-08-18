//Program to sort integers in the file
#include<stdio.h>
#define SIZE 50

//void swap(int *, int *);
//void bubbleSort(int *, int);
//void selectionSort(int *, int);
void insertionSort(int *, int);
main()
{
	int nums[SIZE], i = 0, j = 0;
	FILE *fp;
	char fileName[30];
	read:
	printf("Enter the name of the file: ");
	scanf("%s", fileName);
	if((fp = fopen(fileName, "r")) == NULL)
	{
		printf("Error opening the file.\n");
		goto read;
	}
	while(fscanf(fp, "%d", &nums[i++]) == 1);
	fclose(fp);
	i--;
	insertionSort(nums, i);
	fp = fopen(fileName, "w");
	while(i > 0)
	{
		fprintf(fp, "%d ", nums[j++]);
		i--;
	}
	printf("Elements of the file successfully sorted.\n");
	fclose(fp);
}

void insertionSort(int *nums, int n)
{
	int i, j, key;
	for(i = 1; i < n; i++)
	{
		key = nums[i];
		j = i - 1;
		while(j >= 0 && nums[j] > key)
		{
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = key;
	}
}

/*
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
*/

/*
void selectionSort(int *nums, int n)
{
	int i, j, min;
	for(i = 0; i < n - 1; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(nums[min] > nums[j])
			{
				min = j;
			}
		}
		swap(&nums[i], &nums[min]);
	}
}
*/

/*
void bubbleSort(int *nums, int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(nums[j] > nums[j + 1])
			{
				swap(&nums[j], &nums[j + 1]);
			}
		}
	}
}
*/
