#include<stdio.h>

const int x = 10;

int display_value()
{
    
    printf("%d\n", x);
}
int main()
{
    display_value();
    printf("%d\n", x);
}