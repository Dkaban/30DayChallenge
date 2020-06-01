// THE PROBLEM
// ***************************
// Given a non-empty array of integers, every element appears twice except for one. Find that single one.
// Solution Created By: Dustin Kaban
// Date: May 28th, 2020
// ***************************

class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int temp = nums[0];
        for(int i=1; i<nums.size(); i++) 
        {
            temp = temp ^ nums[i];
        }
        return temp;
    }
};
