#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int i, n, value, position, append_value;
    vector<int> array;
    
    cout << "Input number of elements of array: ";
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cout << "Array[" << i << "] = ";
        cin >> value;
        array.push_back(value);
    }
    
    cout << "Select position you want to append element: ";
    cin >> position;
    cout << "Input value you want to append: ";
    cin >> append_value;
    
    array.insert(array.begin() + position, append_value);
    n++;
    cout << "------------------------------------------" << endl;
    cout << "The array: " << endl;
    
    for(i = 0; i < array.size(); i++)
    {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }
    return 0;
}