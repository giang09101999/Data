#include<stdio.h>

int main()
{
    int a, b;
    printf("Input value of the first number: ");
    scanf("%d", &a);
    printf("Input value of the second number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of first number is: %d\n", a);
    printf("The value of second number is: %d\n", b);
}