// THE PROBLEM
// ***************************
// Imagining a library system where you are given two dates
// The actual return date and the expected return date.  If the return date is the same month, *15 for each day
// If the actual return is another year, *500
// Solution Created By: Dustin Kaban
// Date: June 22nd, 2020
// ***************************

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int year, month, day;
    int expYear, expMonth, expDay;
    
    cin >> day >> month >> year;
    cin >> expDay >> expMonth >> expYear;

    cout << (((((long)year * 10000L) + ((long)month * 100L) + (long)day) - (((long)expYear * 10000L) + ((long)expMonth * 100L) + (long)expDay)<= 0)? 0:((year - expYear) > 0)?10000:((month-expMonth)>0)?(month-expMonth)*500:(day-expDay) *15) << endl;

    return 0;
}
