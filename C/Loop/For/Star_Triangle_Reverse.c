#include<stdio.h>

int main()
{
	int i, n, j;
	
	printf("Input value of n: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		for(j = n; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}