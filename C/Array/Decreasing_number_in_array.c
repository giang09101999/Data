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
    printf("The decreasing numbers of array: \n");
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(array[i] < array[j])
            {
                int tempt;
                tempt = array[i];
                array[i] = array[j];
                array[j] = tempt;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}