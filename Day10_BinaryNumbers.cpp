// THE PROBLEM
// ***************************
// Given a base-10 integer, n, convert it to binary (base-2). 
// Then find and print the base-10 integer denoting the maximum number of 
// consecutive 1's in n's binary representation.
// Solution Created By: Dustin Kaban
// Date: June 5th, 2020
// ***************************

#include <bits/stdc++.h>
#include <iomanip>
#include <string>

using namespace std;

//Convert the integer to a binary string
//Convert that string into a char array so we can loop through it
//Add to the count until we hit a 0, then reset the count.
//Output the higher number of the count or the reset (consecutive or 0)
void convertToBinary(int n)
{
    string binaryString = bitset<32>(n).to_string();

    int x = binaryString.length(); 
    char char_array[x + 1]; 
    strcpy(char_array, binaryString.c_str()); 

    int consecutiveOnesCount = 0;
    int streakCount = 0;
    for (int i = 0; i < (int)sizeof(char_array)-1; i++) 
    { 
        if (char_array[i] == '0')
        {
            streakCount = 0; 
        }
        else
        {
            streakCount++;
            consecutiveOnesCount = max(consecutiveOnesCount, streakCount); 
        } 
    } 

    cout << consecutiveOnesCount << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    convertToBinary(n);

    return 0;
}
