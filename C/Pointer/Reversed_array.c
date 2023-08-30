#include<stdio.h>

int main()
{
	int *p;
	int i, n;
	
	printf("Input value of elements of array: ");
	scanf("%d", &n);
	int array[n];
	int a = n;
	p = array;
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	
	i = 0;
	while(i < n)
	{
		int tempt = *(p + i);
		*(p + i) = *(p + (n - 1));
		*(p + (n - 1)) = tempt;
		i++;
		n--;
	}
	printf("----------------------------\n");
	printf("The array after reversing:\n");
	for(i = 0; i < a; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
}