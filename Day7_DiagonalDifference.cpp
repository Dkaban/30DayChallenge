// THE PROBLEM
// ***************************
// Given a square matrix, calculate the absolute difference between the sums of its diagonals.
// Solution Created By: Dustin Kaban
// Date: June 2nd, 2020
// ***************************

int diagonalDifference(vector<vector<int>> arr) {
    //2D array
    //Increment by 1 column each time we move down a row
    //0, 1, 2, then 3 on the column count
    //0,1,2,3 on the row count
    int rightSum = 0;
    for(int i=0;i<arr.size();i++)
    {
        rightSum += arr[i][i];
    }

    int columnIndex = arr.size()-1;
    int leftSum = 0;
    for(int i=0;i<arr.size();i++)
    {
        leftSum += arr[i][columnIndex];
        columnIndex--;
    }

    return abs(rightSum-leftSum);
}
