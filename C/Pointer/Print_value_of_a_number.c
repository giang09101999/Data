#include<stdio.h>

int main()
{
    int *p;
    int num;
    printf("Input value of number: ");
    scanf("%d", &num);
    p = &num;
    printf("The value of number is: %d\n", *p);
}