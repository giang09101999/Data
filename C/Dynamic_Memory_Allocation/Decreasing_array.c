#include<stdio.h>

int main()
{
	int i, n, j, *p;
	printf("Input number of elements of array: ");
	scanf("%d", &n);

	p = (int*)malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(*(p + i) < *(p + j))
			{
				int tempt = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = tempt;
			}
		}
	}
	
	printf("-----------------------------\n");
	printf("The decreasing array:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, *(p + i));
	}
	free(p);
}