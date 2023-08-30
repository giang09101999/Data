#include<stdio.h>

int main()
{
    int i, n;
	int min, max;
	printf("Input number of elements of array 1: ");
	scanf("%d", &n);
	int array_1[n], array_2[n];
	printf("Input elements of array 1:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array_1[%d] = ", i);
		scanf("%d", &array_1[i]);
	}

	for(i = 0; i < n; i++)
	{
		array_2[i] = array_1[i];
	}
	
	printf("--------------------------------\n");
	printf("The elements of array 1:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array_1[%d] = %d\n", i, array_1[i]);
	}
	printf("--------------------------------\n");
	printf("The elements of array 2:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array_2[%d] = %d\n", i, array_2[i]);
	}
}