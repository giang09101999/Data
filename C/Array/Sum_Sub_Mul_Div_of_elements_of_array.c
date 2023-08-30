#include<stdio.h>

int main()
{
    int i, n;
	int sum = 0, sub, mul = 1, div;
	int start_point, end_point;
	printf("Input number of elements of array: ");
	scanf("%d", &n);
	int array[n];
	printf("Input elements of array:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	printf("--------------------------------\n");
	
	printf("Input the start point: ");
	scanf("%d", &start_point);
	
	printf("Input the end point: ");
	scanf("%d", &end_point);
	

	for(i = start_point; i <= end_point; i++)
	{
		sum += array[i];
		mul *= array[i];
	}
	
	sub = array[start_point];	
	div = array[start_point];
	for(i = start_point + 1; i <= end_point; i++)
	{
		sub -= array[i];
		div /= array[i];
	}
    printf("-------------------------------\n");
	printf("The sum is: %d\n", sum);
	printf("The substraction is: %d\n", sub);
	printf("The multiple is: %d\n", mul);
	printf("The divide is: %d\n", div);
}