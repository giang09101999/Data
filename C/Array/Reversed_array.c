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
    int a = n;
    i = 0;
    while(i < n)
    {
        int tempt;
        tempt = Array[i];
        Array[i] = Array[n - 1];
        Array[n - 1] = tempt;
        i++;
        n--;
    }
    printf("-----------------------------------\n");
    printf("The elements of array after reversing are:\n");
    for(i = 0; i < a; i++)
    {
        printf("Array[%d] = %d\n", i, Array[i]);
    }
}