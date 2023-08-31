#include <stdio.h>

int main() {

    int i, j, n;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    int array[n];
    int *p;
    p = array;
    
    for(i = 0; i < n; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", (p + i));
    }
    
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(p + i) < *(p + j))
            {
                int tempt = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = tempt;
            }
        }
    }
	printf("---------------------\n");
	printf("The decreasing array is:\n");
	for(i = 0; i < n; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}

    return 0;
}