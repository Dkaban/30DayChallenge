// THE PROBLEM
// ***************************
// Write a factorial function that takes a positive integer, 
// N as a parameter and prints the result of N!(N factorial).
// Solution Created By: Dustin Kaban
// Date: June 4th, 2020
// ***************************

#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) 
{
    if(n!=1) return n * factorial(n-1);
    else return 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
