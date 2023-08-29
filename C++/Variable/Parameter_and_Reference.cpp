#include <iostream>
using namespace std;
void display_value(int &a, int &b)
{
    a = a + 1;
    b = b + 1;
}

int main() {
    int a = 10;
    int b = 11;

    display_value(a, b);
    
    cout << a << " and " << b << endl; 
    
    return 0;
}



