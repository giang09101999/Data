#include<stdio.h>
#include<stdbool.h>

int main()
{
	int i, j, n;
	bool swapped;
	printf("Input size of array: ");
	scanf("%d", &n);
	
	int array[n];
	for(i = 0; i < n; i++){
    	printf("Array[%d] = ", i);
    	scanf("%d", &array[i]);
	}
	
	for(i = 0; i < n - 1; i++)
	{
		swapped = false;
		for(j = 0; j < n - i - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				int tempt = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempt;
				swapped = true;
			}
		}
		if(swapped == false)
			break;
	}
	
	printf("-----------------------------\n");
	printf("The sort bubble:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}
}