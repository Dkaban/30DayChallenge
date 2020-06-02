  
// THE PROBLEM
// ***************************
// Given a size N and array of integers, print the array in reverse order
// space separated.
// NOTE: This is only a sample of the code (the rest of the code was provided by hackerrank.com)
// Solution Created By: Dustin Kaban
// Date: June 2nd, 2020
// ***************************

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void displayReverseOrder(vector<int> arr)
{
    for(int i=arr.size()-1;i>=0;i--)
    {
        cout << arr[i] << " ";
    }
}
