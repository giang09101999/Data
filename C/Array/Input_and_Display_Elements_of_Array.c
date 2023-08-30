#include<stdio.h>

int main()
{
    int i, n;
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	
	int array[n];
	printf("Input elements of array:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	printf("--------------------------------\n");
	printf("The elements of array are:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
}