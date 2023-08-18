//Program to search an element in the file
#include<stdio.h>
#define MAX 100

void sort(int *, int);
//int linearSearch(int *, int, int);
int binarySearch(int *, int, int);
main()
{
	int index, nums[MAX], i = 0, j = 0, key;
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
	while((fscanf(fp ,"%d", &nums[i++])) == 1);
	i--;
	printf("Enter the key element: ");
	scanf("%d", &key);
	index = binarySearch(nums, i, key);
	if(index == -1)
	{
		printf("Element %d not found\n", key);
	}
	else
	{
		printf("Element %d found\n", key);
	}
	fclose(fp);
}

void sort(int *nums, int n)
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

int binarySearch(int *nums, int n, int key)
{
	sort(nums, n);
	int mid, high = n - 1, low = 0;
	while(low <= high)
	{
		mid = (low + high)/2;
		if(nums[mid] == key)
		{
			return mid;
		}
		else if(nums[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}

/*
int linearSearch(int *nums, int n, int key)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(nums[i] == key)
		{
			return i;
		}
	}
	return -1;
}
*/
