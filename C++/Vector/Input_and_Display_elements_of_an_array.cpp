#include<iostream>;
#include<vector>;
using namespace std;

int main()
{
	vector<int> array;
	
	int i, n, k;
	cout << "Input number of elements of array: ";
	cin >> n;
	
	for(i = 0; i < n; i++)
	{
		cout << "Array[" << i << "] = ";
		cin >> k;
		array.push_back(k);
	}
    
    cout << "-------------------------------------" << endl;
    cout << "The array: " << endl;
	for(i = 0; i < n; i++)
	{
		cout << "Array[" << i << "] = " << array[i] << endl;
	}	
}