#include <iostream>
using namespace std;
template<typename T>

int add_two_numbers(T &num1, T &num2)
{
    T sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
}


int main() {
    int a = 4, b = 5;
    float x = 1, y = 2;
    double c = 6, d = 7;
    
    add_two_numbers(a, b);
    add_two_numbers(x, y);
    add_two_numbers(c, d);
    return 0;
}