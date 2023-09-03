#include<stdio.h>

int main()
{
	int i, n, *p;
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	int a = n;	
	p = (int*)malloc(n*sizeof(int));
	
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
	
	printf("-----------------------------\n");
	printf("The reversed array:\n");
	for(i = 0; i < a; i++)
	{
		printf("Array[%d] = %d\n", i, *(p + i));
	}
}