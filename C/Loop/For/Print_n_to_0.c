#include<stdio.h>

int main()
{
    int n, i;
    printf("Input number:\n");
    scanf("%d", &n);
    printf("--------------------------\n");
    for(i = n; 0 <= i; i--)
    {
        printf("%d\n", i);
    }
}