// THE PROBLEM
// ***************************
// An overview of different data types in C++ and how input and output works.
// Solution Created By: Dustin Kaban
// Date: May 27th, 2020
// ***************************

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double dd;
    string s2;

    cin >> i2 >> dd >> s2;

    cout << i+i2 << endl;
    
    cout << fixed << setprecision(1) << d+dd << endl;
    
    cout << s+s2;
    getline(cin,s2);
    cout << s2;

    return 0;
}
