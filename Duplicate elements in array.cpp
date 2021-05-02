/*
https://leetcode.com/problems/find-all-duplicates-in-an-array/
At-1
Runtime: 48 ms, faster than 81.42% of C++ online submissions for Find All Duplicates in an Array.
Memory Usage: 33.7 MB, less than 36.00% of C++ online submissions for Find All Duplicates in an Array.
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> out;
        std::vector<bool> m_allFalse(nums.size(), false);
        for(int i=0;i<nums.size();i++)
        {
            if(m_allFalse[nums[i]] == false)
                m_allFalse[nums[i]]=true;
            else
                out.push_back(nums[i]);
        }
        return out;
    }
};