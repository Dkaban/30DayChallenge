// THE PROBLEM
// ***************************
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// Solution Created By: Dustin Kaban
// Date: June 2nd, 2020
// ***************************

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int index1 = 0;
        int index2 = 0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    index1 = i;
                    index2 = j;
                    break;
                }
            }
        }
        return vector<int> {index1,index2};
    }
};
