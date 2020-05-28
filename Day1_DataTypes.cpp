#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i2;
    double dd;
    string s2;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> i2 >> dd >> s2;

    // Print the sum of both integer variables on a new line.
    cout << i+i2 << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d+dd << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s+s2;
    getline(cin,s2);
    cout << s2;

    return 0;
}
