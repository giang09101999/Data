#include <stdio.h>

int main()
{
	int i, n, position;
	int *p;
	printf("Input number of elements of array:\n");
	scanf("%d", &n);
	
	int array[n];
	p = array;
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	
	printf("Input the position you want to delete: ");
	scanf("%d", &position);
	
	for(i = position; i < n - 1; i++)
	{
		*(p + i) = *(p + i + 1); 
	}
	n--;
	printf("--------------------------");
	printf("The array after deleting an element: \n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
}