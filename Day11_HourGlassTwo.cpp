// THE PROBLEM
// ***************************
// Calculate the hourglass sum for every hourglass in A (array), then print the maximum hourglass sum.
// Solution Created By: Dustin Kaban
// Date: June 6th, 2020
// ***************************

#include <bits/stdc++.h>

using namespace std;

int hourGlassSum(vector<vector<int>> arr)
{
    int maxSum = INT_MIN;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
            arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            maxSum = max(maxSum,sum);
        }
    }
    return maxSum;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << hourGlassSum(arr) << endl;

    return 0;
}
