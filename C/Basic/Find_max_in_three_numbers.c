#include<stdio.h>

int main()
{
	float a, b, c, max;

	printf("Input value of a: ");
	scanf("%f", &a);
	
	printf("Input value of b: ");
	scanf("%f", &b);
	
	printf("Input value of c: ");
	scanf("%f", &c);
	
	max = a;
	if(a < b)
		max = b;
	
	if(b < c)
		max = c;
	
	printf("The max is: %f", max);
}