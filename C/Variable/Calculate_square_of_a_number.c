#include<stdio.h>

int main()
{
    int num;
    printf("Input value of number: ");
    scanf("%d", &num);

    int square;
    square = num*num;
    printf("The square of this number is: %d\n", square);
}