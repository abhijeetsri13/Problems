/*
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]





Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subsets.
Memory Usage: 7.1 MB, less than 58.50% of C++ online submissions for Subsets.
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> out;
        //out.push_back(vector<int>{});
        unsigned int pow_set_size = pow(2, nums.size());
        
        for(int i=0;i<pow_set_size;i++)
        {
          vector<int> subset;
          for(int j=0;j<nums.size();j++)
          {
              if(i&(1<<j))
                subset.push_back(nums[j]);
          }
            out.push_back(subset);
        }
        return out;
    }
};