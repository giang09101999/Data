#include<stdio.h>

struct Complex_number
{
    int real;
    int image;

};

int main()
{
    struct Complex_number complex_number;
    printf("Input the real part: ");
    scanf("%d", &complex_number.real);

    printf("Input the image part: ");
    scanf("%d", &complex_number.image);

    printf("\nThe complex number is: ");
    printf("%d + %di\n", complex_number.real, complex_number.image);
}