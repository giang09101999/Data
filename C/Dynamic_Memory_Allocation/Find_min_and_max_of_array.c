#include<stdio.h>

int main()
{
	int i, *p, n, min, max;
	
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	
	p = (int*)malloc(n*sizeof(int));

	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", (p + i));
	}
	min = *p;
	max = *p;
	for(i = 1; i < n; i++)
	{
		if(min > *(p + i))
		{
			min = *(p + i);
		}
		
		if(max < *(p + i))
		{
			max = *(p + i);
		}		
	}
	printf("-----------------------\n");
	printf("The maximum is: %d\n", max);
	printf("The minimum is: %d\n", min);
	free(p);
}