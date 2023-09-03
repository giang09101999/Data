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
	
	p = realloc(p, (n + 1)*sizeof(int));
	printf("----------------------------------\n");
	printf("Select position you want to append: ");
	scanf("%d", &position);
	
	for(i = n; i > position; i--)
	{
		*(p + i) = *(p + (i - 1));
	}
	
	printf("Input value you want to append: ");
	scanf("%d", (p + position));
	printf("----------------------------------\n");
	printf("The array after appending:\n");
	for(i = 0; i < a + 1; i++)
	{
		printf("Array[%d] = %d\n", i, *(p + i));
	}	
	
}