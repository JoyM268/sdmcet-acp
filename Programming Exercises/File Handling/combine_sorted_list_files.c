//Two files DATA1 and DATA2 contain sorted lists of integers. 
//Write a program to produce a third file data which holds a single sorted, merged list of these two lists. Use command line arguments to specify the file name
#include<stdio.h>
#include<stdlib.h>

int *merge_arrays(int *arr1, int *arr2, int n1, int n2)
{
    int *arr3 = (int *)malloc((n1 + n2) * sizeof(int));
    int i = 0, j = 0, k = 0; 
    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    } 
    while(i < n1)
    {
        arr3[k++] = arr1[i++];
    }
    while(j < n2)
    {
        arr3[k++] = arr2[j++];
    }
    return arr3;
}

main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3;
    int arr1[1000], arr2[1000], n1, n2, i, *merged;
    if(argc != 4)
    {
        printf("Insufficient arguments\n");
        exit(1);
    }
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    fp3 = fopen(argv[3], "w");
    if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    n1 = n2 = 0;
    while(fscanf(fp1, "%d", &arr1[n1]) == 1)
    {
        n1++;
    }
    while(fscanf(fp2, "%d", &arr2[n2]) == 1)
    {
        n2++;
    }
    merged = merge_arrays(arr1, arr2, n1, n2);
    for(i = 0; i < n1 + n2; i++)
    {
        fprintf(fp3, "%d ", merged[i]);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    free(merged);
}
