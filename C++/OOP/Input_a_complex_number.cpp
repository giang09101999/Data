#include<iostream>

using namespace std;

class Complex_number
{
    public:
    int real;
    int image;
    void input_function();
    void output_funciton();

};

void Complex_number::input_function()
{
    cout << "Input value of real part: " << endl;
    cin >> real;

    cout << "Input value of image part: " << endl;
    cin >> image;

}

void Complex_number::output_funciton()
{
    cout << "The complex number is: " << real << " + " << image << "i" << endl;
} 


int main()
{
    Complex_number complex_number;
    complex_number.input_function();
    cout << "-----------------------------" << endl;
    complex_number.output_funciton();
}