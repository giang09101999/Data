#include<stdio.h>

void display_value()
{
    static int num = 15;
    num = num + 1;
    printf("%d\n", num);
}

int main()
{
    display_value();
    display_value();
    display_value();
    display_value();
}