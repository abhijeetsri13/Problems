/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.


Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Subarray.
Memory Usage: 13 MB, less than 90.52% of C++ online submissions for Maximum Subarray.


*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {      
        for(int i=1;i<nums.size(); i++)
           if((nums[i] + nums[i-1])>nums[i])
               nums[i]=nums[i-1]+nums[i];
        return  *max_element(nums.begin(), nums.end()); 
    }
};