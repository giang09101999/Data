#include<stdio.h>

int main()
{
	int n;
	printf("Enter value of n:\n");
	scanf("%d", &n);
	
	printf("-----------------\n");
	while(n >= 1)
	{
		printf("%d\n", n);
		n--;
	}	
}