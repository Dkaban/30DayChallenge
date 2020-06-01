// THE PROBLEM
// ***************************
// Write a function that returns the max out of 4 integers passed to it.
// Solution Created By: Dustin Kaban
// Date: May 31st, 2020
// ***************************

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    return max(max(max(a,b),c),d);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
