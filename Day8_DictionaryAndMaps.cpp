// THE PROBLEM
// ***************************
// Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
// You will then be given an unknown number of names to query your phone book for. 
// For each name queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; 
// if an entry for name is not found, print Not found instead.
// Solution Created By: Dustin Kaban
// Date: June 3rd, 2020
// ***************************

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

map<string,int> addToPhoneBook(int amount)
{
    map<string,int> temp;
    for(int i=0;i<amount;i++)
    {
        string s;
        int num;
        cin >> s >> num;
        temp.insert(pair<string,int>(s,num));
    }
    return temp;
}

void checkRecords(map<string,int> phoneBook)
{
    string input;
    while(cin >> input)
    {
        if(phoneBook.find(input) != phoneBook.end())
        {
            cout << input << "=" << phoneBook[input] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
}

int main() {
    int n; //number of entries
    cin >> n;

    map<string,int> phoneBook;
    phoneBook = addToPhoneBook(n);
    checkRecords(phoneBook);

    return 0;
}
