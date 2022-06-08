/*
35. Search Insert Position
https://leetcode.com/problems/search-insert-position/


Runtime: 0 ms, faster than 100.00% of C++ online submissions for Search Insert Position.
Memory Usage: 9.6 MB, less than 72.63% of C++ online submissions for Search Insert Position.

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        unsigned int low=0;
        unsigned int high=nums.size();
        unsigned int mid = (low+high)/2;
        if(nums[low]>=target)
            return 0;
        while(mid>low && mid<high)
        {
            if(nums[mid]<= target && nums[mid]>=target)
                return mid;
            else if(nums[mid]>target)
                high = mid;
            else if(nums[mid] < target)
                low = mid;
            mid = (low+high)/2;
        }
        return mid+1;
    }
};
