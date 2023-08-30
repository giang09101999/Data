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
	
	printf("The even numbers of array:\n");
	for(i = 0; i < n; i++)
	{		
		if(array[i] % 2 == 0)
		{
			printf("Array[%d] = %d\n", i, array[i]);
		}
	}
	
	printf("The odd numbers of array:\n");
	for(i = 0; i < n; i++)
	{	
		if(array[i] % 2 != 0)
		{
			printf("Array[%d] = %d\n", i, array[i]);
		}
	}
}