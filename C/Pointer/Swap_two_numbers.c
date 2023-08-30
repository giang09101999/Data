#include<stdio.h>

int main()
{
	int *p1, *p2;
	int num1, num2;
	
	p1 = &num1;
	p2 = &num2;
	
	printf("Input value of the number 1: ");
	scanf("%d", &num1);
	
	printf("Input value of the number 2: ");
	scanf("%d", &num2);

	*p1 = *p1 + *p2; 
	*p2 = *p1 - *p2; 
	*p1 = *p1 - *p2; 
	printf("-------------------------------\n");
	printf("The value of number 1: %d\n", *p1);
	printf("The value of number 2: %d\n", *p2);
}