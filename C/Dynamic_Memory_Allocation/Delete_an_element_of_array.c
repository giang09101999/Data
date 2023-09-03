#include<stdio.h>

int main()
{
	int i, n, *p, position;
	printf("Input number of element of array: ");
	scanf("%d", &n);
	int a = n;
	p = (int*)malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	
	p = realloc(p, (n - 1)*sizeof(int));
	printf("----------------------------------\n");
	printf("Select position you want to delete: ");
	scanf("%d", &position);
	
	for(i = position; i < n; i++)
	{
		*(p + i) = *(p + (i + 1));
	}

	printf("----------------------------------\n");
	printf("The array after deleting:\n");
	for(i = 0; i < n - 1; i++)
	{
		printf("Array[%d] = %d\n", i, *(p + i));
	}	
	free(p);
}