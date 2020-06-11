// THE PROBLEM
// ***************************
// Convert a string to an int, error check if it is possible. 
// If not possible, print "Bad String"
// Solution Created By: Dustin Kaban
// Date: June 11th, 2020
// ***************************

#include <string>
#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;

    try
    {
        int i = stoi(S);
        cout << i << endl;
    }
    catch(invalid_argument const &e)
    {
        cout << "Bad String" << endl;
    }

    return 0;
}
