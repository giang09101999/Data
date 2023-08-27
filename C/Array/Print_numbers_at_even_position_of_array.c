#include<stdio.h>

int main()
{
    int n, i;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
        
    }
    printf("-----------------------------------\n");
    printf("The numbers at even position of array is: \n");
    for(i = 0; i < n; i += 2)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}