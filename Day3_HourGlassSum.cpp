// THE PROBLEM
// ***************************
// Complete the function hourglassSum in the editor below. 
// It should return an integer, the maximum hourglass sum in the array.
// hourglassSum has the following parameter(s):
// arr: an array of integers
// Solution Created By: Dustin Kaban
// Date: May 29th, 2020
// ***************************


#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) 
{
    int max_sum = INT_MIN;
    for(int i=0;i <= 3;i++)
    {
        for(int j=0;j <= 3;j++)
        {
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
            arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            max_sum = max(max_sum,sum);
        }
    }
    return max_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
