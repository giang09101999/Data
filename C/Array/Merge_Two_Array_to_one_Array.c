#include<stdio.h>

int main()
{
    int i, n, y, x, z = 0;
	printf("Input number of elements of array 1: ");
	scanf("%d", &x);
	
	printf("Input number of elements of array 2: ");
	scanf("%d", &y);
	
	int array[x + y], array_1[x], array_2[y];
	printf("Input elements of array 1:\n");
	
	for(i = 0; i < x; i++)
	{
		printf("Array_1[%d] = ", i);
		scanf("%d", &array_1[i]);
	}

	printf("Input elements of array 2:\n");
	for(i = 0; i < y; i++)
	{
		printf("Array_2[%d] = ", i);
		scanf("%d", &array_2[i]);
	}
	
	
	for(i = 0; i < x; i++)
	{
		array[i] = array_1[i];
	}

	for(i = x; i < x + y; i++)
	{
		array[i] = array_2[z];
		z++;
	}	
	
	printf("The array after merging two arrays:\n");
	for(i = 0; i < x + y; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}		
}