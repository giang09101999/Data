#include<iostream>
#include<vector>

using namespace std;

int main()
{
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
	cout << "---------------------------------" << endl;
	cout << "The array: " << endl;
	for(i = 0; i < array.size(); i++)
	{
		cout << "Array[" << i << "] = " << array[i] << endl;
	}
}