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
