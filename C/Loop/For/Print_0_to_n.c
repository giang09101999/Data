#include<stdio.h>

int main()
{
    int n, i;
    printf("Input number:\n");
    scanf("%d", &n);
    printf("--------------------------\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
}