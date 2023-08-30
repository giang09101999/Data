#include<stdio.h>

int main()
{
	int i, n;
	float sum = 0, mul = 1, sub = 1, div = 1;
	printf("Input value of n: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		sum += i;
		mul *= i;
	}

	for(i = 2; i <= n; i++)
	{
		sub -= i;
		div /= i;
	}
	
	printf("The sum is: %.1f\n", sum);
	printf("The substraction is: %.1f\n", sub);
	printf("The multiple is: %.1f\n", mul);	
	printf("The division is: %.1f\n", div);
}