#include <stdio.h>

void display_value(int a, int b)
{
    a = a + 1;
    b = b + 1;
	printf("The value of a is: %d\n", a);
	printf("The value of b is: %d\n", b);
}

int main() {
    int a = 10;
    int b = 11;

    display_value(a, b);
    
    return 0;
}



