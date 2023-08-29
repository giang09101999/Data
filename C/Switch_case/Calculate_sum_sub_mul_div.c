#include <stdio.h>

int main() {
	int a, b, i;
	printf("Input value of a: ");
	scanf("%d", &a);
	printf("Input value of b: ");
	scanf("%d", &b);
	
	printf("1. Sum\n");
	printf("2. Substract\n");
	printf("3. Multiple\n");
	printf("4. Divide\n");
	printf("Select Mode: ");
	scanf("%d", &i);
	
	switch(i)
	{
		case 1: 
			int Sum = a + b;
			printf("The sum is: %d\n", Sum);
			break;
			
		case 2:
			int Sub = a - b;
			printf("The substraction is: %d\n", Sub);
			break;
			
		case 3:
			int Mul = a*b;
			printf("The multiple is: %d\n", Mul);
			break;
			
		case 4:
			int Div = a/b;
			printf("The divide is: %d\n", Div);
			break;
			
		default:
			printf("Error occurs!!\n");
			break;
	}
    return 0;
}