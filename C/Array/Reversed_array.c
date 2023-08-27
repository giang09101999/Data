#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Input number of elements of array: ");
    scanf("%d", &n);
    int a = n;
    int array[n];
    
    for(i = 0; i < n; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    i = 0;
    int tempt;
    while(i < n)
    {
        tempt = array[i];
        array[i] = array[n - 1];
        array[n - 1] = tempt;
        i++;
        n--;
    }
    printf("--------------------------------\n");
    printf("The array after reversing: \n");
    for(i = 0; i < a; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}