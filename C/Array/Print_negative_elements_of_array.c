#include<stdio.h>

int main()
{
    int n, i, tempt = 0;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
        
    }
    printf("-----------------------------------\n");
    for(i = 0; i < n; i++)
    {
        if(array[i] < 0)
            tempt++;
        
    }
    if(tempt == 0)
    {
        printf("There is no negative element in array");
    }
    else
    {
        printf("The negative elements of array is:\n");
        for(i = 0; i < n; i++)
        {
            if(array[i] < 0)
                printf("%d\n", array[i]);
                tempt++;
            
        }
    }    
}