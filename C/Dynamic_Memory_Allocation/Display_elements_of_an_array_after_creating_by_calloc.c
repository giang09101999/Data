#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, *p;
	
	printf("Input number of elements: ");
	scanf("%d", &n);
	p = (int*)calloc(n, sizeof(int));
	
    printf("----------------------\n");
    printf("The elements of array:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, *(p + i));
	}	

    free(p);
}