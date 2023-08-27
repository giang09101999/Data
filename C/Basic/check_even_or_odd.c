#include<stdio.h>

int main()
{
    int n;
    printf("Input value of n: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("This number is even\n");    
    else
        printf("This number is odd\n");
}