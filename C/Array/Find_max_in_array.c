#include<stdio.h>

int main()
{
    int n, i, max;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = ");
        scanf("%d", &array[i]);
        
    }
    max = array[0];
    printf("-----------------------------------\n");
    printf("The biggest number is: ");
    for(i = 1; i < n; i++)
    {
        if(max < array[i])
            max = array[i];
    }
    printf("%d\n", max);
}