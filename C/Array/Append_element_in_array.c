#include<stdio.h>

int main()
{
    int n, i, j, num;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
        
    }
    printf("-----------------------------------\n");
    printf("Input the position you want to append: ");
    scanf("%d", &j);
    int index = j;
    printf("Input value of element you want to append: ");
    scanf("%d", &num);
    printf("The array after appending element:\n");
    for(i = n; i > j; i--)
    {
        array[i] = array[i - 1];
    }
    array[index] = num;
    n++;
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }    
}