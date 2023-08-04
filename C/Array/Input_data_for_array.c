#include<stdio.h>

int main()
{
    int i, n;
    
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    int Array[n];

    for(i = 0; i < n; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &Array[i]);
    }
    printf("-----------------------------------\n");
    for(i = 0; i < n; i++)
    {
        printf("Array[%d] = %d\n", i, Array[i]);
    }
}