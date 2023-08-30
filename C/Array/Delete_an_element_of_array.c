#include<stdio.h>

int main()
{
	int i, n, position, value;
	
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	printf("Input elements of arrray:\n");
	int array[n];
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	printf("Choose position of array you want to delete: ");
	scanf("%d", &position);
	
	for(i = position; i < n - 1; i++)
	{
		array[i] = array[i + 1];
	}
	n--;
	printf("The elements of array after deleting an element:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
}