// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <string.h>
#include "stdio.h"
class Book
{
    public:
    string title;
    string author;
    void add_book();
    void display_information();
    void delete_infomation_of_book();
};

void Book::add_book()
{
    cout << "Enter title of book: ";
    cin >> title;
    cout << "Enter author of book: ";
    cin >> author;
}

void Book::display_information()
{
    cout << "The title: " << title << endl;
    cout << "The author: " << author << endl;
}

int main() {
    int i, n;
    cout << "Input number of Books: ";
    cin >> n;
    Book book[n];
    
    for(i = 0; i < n; i++)
    {
        cout << "\nEnter information for the " << i + 1 << "st book: " << endl;
        book[i].add_book();
    }
    cout << "----------------------------" << endl;
    
    for(i = 0; i < n; i++)
    {
        cout << "The information for the " << i + 1 << "st book: " << endl;
        book[i].display_information();
        cout << "----------------------------" << endl;
    }
    cout << "----------------------------" << endl;
    cout << "Do you want to delete any of books? Please Y or N: " << endl;
    string c;
    cin >> c;
    int num;
    if (c == "Y")
    {
        cout << "Choose book you want to remove: " << endl;
        cin >> num;
        int tempt = num - 1;
        for(i = tempt; i < n - 1; i++)
        {
            book[i] = book[i + 1];
        }
        n--;
        for(i = 0; i < n; i++)
        {
         cout << "The information for the " << i + 1 << "st book: " << endl;
        book[i].display_information();
        cout << "----------------------------" << endl;           
        }
    }
    if (c == "N")
    {
        cout << "End" << endl;
    }    
    return 0;
}