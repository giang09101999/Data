#include<stdio.h>

int main()
{
	int i = 1, n;
	
	printf("Enter value of n:\n");
	scanf("%d", &n);
	
	printf("-----------------\n");
	while(i <= n)
	{
		printf("%d\n", i);
		i++;
	}
	
}