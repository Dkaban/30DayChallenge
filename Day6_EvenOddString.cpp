// THE PROBLEM
// ***************************
// Given a string, S , of length N that is indexed from 0 to N-1, print its even-indexed 
// and odd-indexed characters as 2 space-separated strings on a single line.
// Note: 0 is considered to be an even index.
// ***************************

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string getEvenString(string word)
{
    string temp = "";
    //for(size_t i=0, max = word.length();i != max;i++)
    for(int i=0;i<word.length();i++)
    {
        if(i%2==0)
        {
            temp += word[i];
        }
    }
    return temp;
}

string getOddString(string word)
{
    string temp = "";
    //for(size_t i=0, max = word.length();i != max;i++)
    for(int i=0;i<word.length();i++)
    {
        if(i%2 != 0)
        {
            temp += word[i];
        }
    }
    return temp;
}


int main() {
    int size;
    scanf("%d",&size);

    string str;
    while(cin >> str)
    {
        cout << getEvenString(str) << " " << getOddString(str) << endl;
    }
}
