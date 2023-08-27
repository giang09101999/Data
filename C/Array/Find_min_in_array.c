#include<stdio.h>

int main()
{
    int n, i, min;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
        
    }
    printf("-----------------------------------\n");
    min = array[0];
    printf("The smallest number of array is: ");
    for(i = 1; i < n; i++)
    {
        if(min > array[i])
            min = array[i];
    }
    printf("%d\n", min);
    
}