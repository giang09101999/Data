#include<stdio.h>

int main()
{
    int i, n;
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	int a = n;
	int array[n];
	printf("Input elements of array:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	i = 0;
	while(i < n)
	{
		int tempt = array[i];
		array[i] = array[n - 1];
		array[n - 1] = tempt;
		n--;
		i++;
	}
	printf("--------------------------------\n");
	printf("The elements of array after reversing is:\n");
	for(i = 0; i < a; i++)
	{
	    printf("Array[%d] = %d\n", i, array[i]);
	}
}