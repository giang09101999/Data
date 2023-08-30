#include<stdio.h>

int main()
{
	int i, n, j;
	
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	printf("Input elements of arrray:\n");
	int array[n];
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(array[i] > array[j])
			{
				int tempt = array[i];
				array[i] = array[j];
				array[j] = tempt;
			}
		}
	}
	printf("The increasing array:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
		
	
}