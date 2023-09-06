#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    int i, n, value;
    vector<int> array;
    
    cout << "Input number of elements of array: ";
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cout << "Array[" << i << "] = ";
        cin >> value;
        array.push_back(value);
    }
    
    array.pop_back();
    
    cout << "------------------------------------------" << endl;
    cout << "The array after deleting the last element:" << endl;
    for(i = 0; i < n - 1; i ++)
    {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}