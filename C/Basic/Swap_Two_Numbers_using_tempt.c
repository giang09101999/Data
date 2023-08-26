#include<stdio.h>

int main()
{
	int a, b, tempt;
	
	printf("Enter value of a: ");
	scanf("%d", &a);

	printf("Enter value of b: ");
	scanf("%d", &b);	
	
	tempt = a;
	a = b;
	b = tempt;
	
	printf("------------------------\n");
	printf("The value of a after swaping is: %d\n", a);
	printf("The value of b after swaping is: %d\n", b);
	
}