// THE PROBLEM
// ***************************
// Given a Book class and a Solution class, write a MyBook class that does the following:
// Inherits from Book, has a constructor with title, author, price, and implements a display function to see data
// Solution Created By: Dustin Kaban
// Date: June 8th, 2020
// ***************************

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook{
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    protected:
    string title;
    string author;
    int price;
    public:
    //Constructor
    MyBook(string t, string a, int p)
    {
        title = t;
        author = a;
        price = p;
    }

    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl; 
    }
};
// End class

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
