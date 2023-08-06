/* Define a structure to represent a vector(a series of integer values) and write a modular program to perform the following task:
1. To create a vector.
2. To modify the value of a given element
3. To multiply by a scalar value
4. To display the vector in the form
(10, 20, 30, ...)
Add a function to the program that accepts two vectors as input parameters and returns the addition of two vectors */
#include<stdio.h>
#include<stdlib.h>

struct vector{
    int size;
    int *vList;
};

void modifyVector(struct vector *, int, int);
struct vector createVector(int size);
void multiplyScalar(struct vector *, int);
void displayVector(struct vector *);
struct vector addVectors(struct vector *, struct vector *);
main()
{
    int size, index, newValue, scalarValue, flag;
    printf("Enter the size of vector: ");
    scanf("%d", &size);
    struct vector v = createVector(size);
    printf("Vector: ");
    displayVector(&v);
    do{
        printf("\nEnter the index and new value to modify: ");
        scanf("%d %d", &index, &newValue);
        modifyVector(&v, index, newValue);
        printf("Do you want to modify another element(1 for yes / 0 for no): ");
        scanf("%d", &flag);
    }while(flag == 1);
    printf("Vector after modify: ");
    displayVector(&v);
    printf("\nEnter the scalar value to be multiplied: ");
    scanf("%d", &scalarValue);
    multiplyScalar(&v, scalarValue);
    printf("Vector after multiplying %d: ", scalarValue);
    displayVector(&v);
    printf("\nEnter the size of vector 1: ");
    scanf("%d", &size);
    struct vector v1 = createVector(size);
    printf("Enter the size of vector 2: ");
    scanf("%d", &size);
    struct vector v2 = createVector(size);
    struct vector r = addVectors(&v1, &v2);   
    printf("Resultant vector is: ");
    displayVector(&r);
    free(v1.vList);
    free(v2.vList);
    free(r.vList);
}

struct vector createVector(int size)
{
    int i;
    struct vector v;
    v.size = size;
    v.vList = (int *)calloc(size, sizeof(int));
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &v.vList[i]);
    }
    return v;
}

struct vector addVectors(struct vector *v1, struct vector *v2)
{
    struct vector result;
    if(v1 -> size != v2 -> size)
    {
        printf("The size of two vectors must be same\n");
        exit(0);
    }
    int i;
    result.size = v1 -> size;
    result.vList = (int *)calloc(v1 -> size, sizeof(int));
    for(i = 0; i < result.size; i++)
    {
        result.vList[i] = v1 -> vList[i] + v2 -> vList[i];
    }
    return result;
}

void displayVector(struct vector *v)
{
    int i;
    printf("(");
    for(i = 0; i < (v -> size) - 1; i++)
    {
        printf("%d, ", v -> vList[i]);
    }
    printf("%d)\n", v -> vList[i]);
}

void multiplyScalar(struct vector *v, int scalarValue)
{
    int i;
    for(i = 0; i < v -> size; i++)
    {
        v -> vList[i] *= scalarValue;
    }
}

void modifyVector(struct vector *v, int index, int newValue)
{
    if(index < 0 || index > v -> size - 1)
    {
        printf("Invalid index\n");
        return;
    }
    v -> vList[index] = newValue;
}