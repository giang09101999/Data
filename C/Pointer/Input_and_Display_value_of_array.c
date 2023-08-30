#include<stdio.h>

int main()
{
	int *p;
	int i, n;
	
	printf("Input value of elements of array: ");
	scanf("%d", &n);
	int array[n];
	
	p = array;
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ");
		scanf("%d", (p + i));
	}
	printf("----------------------------\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}		
}