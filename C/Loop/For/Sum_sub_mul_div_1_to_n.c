#include<stdio.h>

int main()
{
    int n, i, sum = 0, mul = 1, sub = 1, div = 1;
    printf("Input value of number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum += i;
    }

    for(i = sub + 1; i <= n; i++)
    {
        sub -= i;
    }   

    for(i = 1; i <= n; i++)
    {
        mul *= i;
    }      

    for(i = div + 1; i <= n; i++)
    {
        div /= i;
    }   

    printf("The sum from 1 to %d is: %d\n", n, sum);
    printf("The substraction from 1 to %d is: %d\n", n, sub);
    printf("The multiple from 1 to %d is: %d\n", n, mul);
    printf("The division from 1 to %d is: %d\n", n, div);

}