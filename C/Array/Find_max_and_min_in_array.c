#include<stdio.h>

int main()
{
    int i, n;
	int min, max;
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
	
	for(i = 0; i < n; i++)
	{
		if(max < array[i])
		{
			max = array[i];
		}
		
		if(min > array[i])
		{
			min = array[i];
		}
	}

	printf("Max is: %d\n", max);
	printf("Min is: %d\n", min);
}