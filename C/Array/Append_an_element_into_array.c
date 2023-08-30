#include<stdio.h>

int main()
{
	int i, n, index, value;
	
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	printf("Input elements of arrray:\n");
	int array[n];
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	printf("Input position you want to append element: ");
	scanf("%d", &index);
	
	printf("Input value you want to append: ");
	scanf("%d", &value);

	for(i = n; i > index; i--)
	{
		array[i] = array[i - 1];
	}
	n++;
	array[index] = value;
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
	
}