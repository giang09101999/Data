#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, *p;
	
	printf("Input number of elements: ");
	scanf("%d", &n);
	p = (int*)calloc(n, sizeof(int));
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	
    printf("----------------------\n");
    printf("The elements of array:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, *(p + i));
	}	
	
	int new_size;
	printf("-----------------------\n");
	printf("Input new size of array: ");
	scanf("%d", &new_size);
	p = (int*)realloc(p, new_size*sizeof(int));
	
	printf("Append new elements into array:\n");
	for(i = n; i < new_size; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	
	printf("--------------------------\n");
	printf("The array after expanding:\n");
	
	for(i = 0; i < new_size; i++)
	{
		printf("Array[%d] = %d\n", i, *(p + i));
	}

    free(p);
}