#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, position, value;
    vector<int> array;
    
    cout << "Input number of elements of array: ";
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cout << "Array[" << i << "] = ";
        cin >> value;
        array.push_back(value);
    }
    
    cout << "Select position you want to delete element: ";
    cin >> position;
    array.erase(array.begin() + position);

    for(i = 0; i < array.size(); i++)
    {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }   
}