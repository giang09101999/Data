#include<iostream>
#include<stdlib.h>
#include <string.h>
#include "stdio.h"
using namespace std;

class People
{
    public:
	int age;
    string name;
    string place;
    string gender;
    void input_data();
    void output_data();
};

void People::input_data()
{

    cout << "Input name: ";
    cin >> name;

    cout << "Input place: ";
	cin >> place;

    cout << "Input gender: ";
	cin >> gender;

	cout << "Input age: ";
	cin >> age;
}

void People::output_data()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Place: " << place << endl;
	cout << "Gender: " << gender << endl;
}


int main()
{
    int n, i;
    cout << "Enter number of people: ";
	cin >> n;
    People people[n];
    for(i = 0; i < n; i++)
    {
        cout << "Input information of the " << i + 1 << "st person: " << endl;
        people[i].input_data();
    }

	cout << "--------------------------------------------------------------------------------" << endl;
    for(i = 0; i < n; i++)
    {
        cout << "Information of the " << i + 1 << "st person is: " << endl;
        people[i].output_data();
		cout << "--------------------------------------------------------------------------------" << endl;
    }	
	
}