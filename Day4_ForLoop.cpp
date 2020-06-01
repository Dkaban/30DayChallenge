// THE PROBLEM
// ***************************
// For each integer nin the interval [a,b] :
// If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if n > 9 and it is an even number, then print "even".
// Else if n > 9 and it is an odd number, then print "odd".
// Solution Created By: Dustin Kaban
// Date: May 30th, 2020
// ***************************

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    scanf("%d %d", &a, &b);

    for(a; a<=b; a++)
    {
        if(a >= 1)
        {
            switch(a)
            {
                case 1: printf("one\n");
                break;
                case 2: printf("two\n");
                break;
                case 3: printf("three\n");
                break;
                case 4: printf("four\n");
                break;
                case 5: printf("five\n");
                break;
                case 6: printf("six\n");
                break;
                case 7: printf("seven\n");
                break;
                case 8: printf("eight\n");
                break;
                case 9: printf("nine\n");
                break;
                default:
                    if(a%2 == 0)
                    {
                        printf("even\n");
                    }
                    else
                    {
                        printf("odd\n");
                    }
                break;
            }
        }
    }
    return 0;
}
