#include<stdio.h>

int main()
{
	int n, i, j;
	printf("Input value of n: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		for(j = n; j >= n - i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}