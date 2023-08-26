#include<stdio.h>

int main()
{
	float edge, width, length, radius;
	float circle_area, rectangle_area, square_area;
	float circle_perimeter, rectangle_perimeter, square_perimeter;
	
	//---------------------------------------------------------------
	printf("Enter value of edge: ");
	scanf("%f", &edge);
	printf("Enter value of width: ");
	scanf("%f", &width);
	printf("Enter value of length: ");
	scanf("%f", &length);
	printf("Enter value of radius: ");
	scanf("%f", &radius);
	//---------------------------------------------------------------
	circle_area = radius*radius*3.14;
	rectangle_area = length*width;
	square_area = edge*edge;
	
	circle_perimeter = 2*3.14*radius;
	rectangle_perimeter = (length + width)*2;
	square_perimeter = edge*4;
	//---------------------------------------------------------------
	printf("The area of circle is: %f\n", circle_area);
	printf("The area of rectangle is: %f\n", rectangle_area);
	printf("The area of square is: %f\n", square_area);
	//---------------------------------------------------------------
	printf("The perimeter of circle is: %f\n", circle_perimeter);
	printf("The perimeter of rectangle is: %f\n", rectangle_perimeter);
	printf("The perimeter of square is: %f\n", square_perimeter);	
}