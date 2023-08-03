#include<iostream>
using namespace std;
class Shape
{
    public:
    int radius;
    int width;
    int length;
    int edge;
    void input_function();
    void output_function();

};

void Shape::input_function()
{
    cout << "Input value of radius" << endl;
    cin >> radius;
    cout << "Input value of width" << endl;
    cin >> width;
    cout << "Input value of length" << endl;
    cin >> length;
    cout << "Input value of edge" << endl;
    cin >> edge;       
}

void Shape::output_function()
{
    int circle_area = 3.14 * radius * radius;
    int rectangle_area = width * length;
    int square_area = edge * edge;

    cout << "The area of circle is: " << circle_area << endl;   
    cout << "The area of rectangle is: "<< rectangle_area << endl;
    cout << "The area of square is: " << square_area << endl;
}


int main()
{
    Shape shape;
    shape.input_function();
    shape.output_function();

}