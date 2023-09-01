#include <stdio.h>

int main()
{
	int i, n, *p, position;
	
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	int array[n];
	
	p = array;
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	
	printf("Input the position you want to append: ");
	scanf("%d", &position);
	
	n++;
	for(i = n; i > position; i--)
	{
		*(p + i) = *(p + (i - 1));
	}
	
	printf("Input value you want to append: ");
	scanf("%d", (p + position));

    printf("-------------------------------------\n");
	printf("The array after appending an element:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}	
	
}