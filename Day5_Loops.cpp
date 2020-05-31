// Given an integer, n , print its first 10 multiples. 
// Each multiple n*i (where 1 <= i <= 10) should be printed on a new line in the form: n x i = result.

#include <bits/stdc++.h>

using namespace std;

void TenMultiples(int n)
{
    if(n >= 2 && n <= 20)
    {
       for(int i=1;i<=10; i++)
       {
           int multipleValue = n*i;
           printf("%d x %d = %d\n",n,i,multipleValue);
       }
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    TenMultiples(n);
    return 0;
}
