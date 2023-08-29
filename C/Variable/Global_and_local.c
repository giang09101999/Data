#include<stdio.h>
int num = 10;

void display_value()
{
    num = 15;
    printf("%d\n", num);
}

int main()
{
    display_value();
    printf("%d\n", num);
}