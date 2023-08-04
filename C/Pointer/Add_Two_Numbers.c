#include<stdio.h>

int main()
{
	int a, b;
	int *p1, *p2;
	p1 =  &a;
	p2 = &b;

	printf("Input value of the first number: ");
	scanf("%d", p1);

	printf("Input value of the first number: ");
	scanf("%d", p2);	
	
	int c = *p1 + *p2;
	printf("The sum is: %d\n", c);
}