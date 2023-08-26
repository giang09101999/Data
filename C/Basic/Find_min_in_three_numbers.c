#include<stdio.h>

int main()
{
	float a, b, c, min;

	printf("Input value of a: ");
	scanf("%f", &a);
	
	printf("Input value of b: ");
	scanf("%f", &b);
	
	printf("Input value of c: ");
	scanf("%f", &c);
	
	min = a;
	if(a > b)
		min = b;
	
	if(b > c)
		min = c;
	
	printf("The min is: %f", min);
}