// THE PROBLEM
// ***************************
// The AdvancedArithmetic interface and the method declaration 
// for the abstract divisorSum(n) method are provided for you in the editor below.
// Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. 
// The implementation for the divisorSum(n) method must return the sum of all divisors of n.
// Solution Created By: Dustin Kaban
// Date: June 14th, 2020
// ***************************

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) 
    {
        //return the values that the number is evenly divisible by
        int sum = 0;
        for(int i=1;i<=n;i++)
        {
            if(n%i == 0)
            {
                sum+= i;
            }
        }
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
