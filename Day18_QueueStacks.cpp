// THE PROBLEM
// ***************************
// This exercise is intended to teach Stacks and Queues.
// The goal was create a push, pop, enqueue and dequeue function and return the top/front most char accordingly.
// Solution Created By: Dustin Kaban
// Date: June 13th, 2020
// ***************************

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution 
{
    private:
    stack<char> charStack;
    queue<char> charQueue;

    public:
    void pushCharacter(char ch)
    {
        charStack.push(ch);
    }

    char popCharacter()
    {
        char topChar = charStack.top();
        charStack.pop();
        return topChar;
    }

    void enqueueCharacter(char ch)
    {
        charQueue.push(ch);
    }

    char dequeueCharacter()
    {
        char frontChar = charQueue.front();
        charQueue.pop();
        return frontChar;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
