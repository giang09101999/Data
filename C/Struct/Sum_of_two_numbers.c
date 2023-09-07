#include<stdio.h>

struct Sum
{
	int a;
	int b;
};

int Calculate_Sum(int a, int b)
{
	int c = a + b;
	printf("--------------------\n");
	printf("The sum is: %d\n", c);
}

int main()
{
	struct Sum sum;
	printf("Input value of a: ");
	scanf("%d", &sum.a);
	printf("Input value of b: ");
	scanf("%d", &sum.b);

	Calculate_Sum(sum.a, sum.b);
}