#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
        
    }
    printf("-----------------------------------\n");
    printf("Input the position you want to delete: ");
    scanf("%d", &j);
    printf("The array after deleting element:\n");
    for(i = j; i < n; i++)
    {
        array[i] = array[i + 1];
    }
    n--;
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }    
}