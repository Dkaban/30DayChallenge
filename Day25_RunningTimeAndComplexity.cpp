// THE PROBLEM
// ***************************
// A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number,n, 
// determine and print whether it's Prime or Not prime.
// Try to come up with a O(sqrt(n)) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm.
// Solution Created By: Dustin Kaban
// Date: June 5th, 2020
// ***************************

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1) return false;

    if(n <= 3) return true;

    if(n%2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i = i+6)
    {
        if(n%i == 0 || n %(i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}


int main() {
    int t;
    cin >> t;
    int n;
    while(cin >> n)
    {
        if(isPrime(n))
        {
            cout << "Prime" << endl;
        }
        else cout << "Not prime" << endl;
    }  
    return 0;
}
