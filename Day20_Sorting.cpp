// THE PROBLEM
// ***************************
// Bubble sort an array using a for loop.
// When completed, print how many swaps were required, the first element, and the last element.
// Solution Created By: Dustin Kaban
// Date: June 15th, 2020
// ***************************

#include <bits/stdc++.h>

using namespace std;

void printDetails(vector<int> arr, int numSwaps)
{
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[arr.size()-1] << endl;
}

void forLoopBubbleSort(vector<int> arr)
{
    int totalSwaps = 0;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        int numSwaps = 0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                numSwaps++;
                totalSwaps++;
            }
        }
        //When no swaps take place, we're optimized already.
            if(numSwaps == 0)
            break;
    }
    printDetails(arr, totalSwaps);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }

    forLoopBubbleSort(a);
    return 0;
}
