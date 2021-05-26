
/*

Runtime: 20 ms, faster than 79.73% of C++ online submissions for Find Pivot Index.
Memory Usage: 31 MB, less than 86.42% of C++ online submissions for Find Pivot Index.

*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int total_sum=0;
       for(int i=0;i<nums.size();i++)
       {
           total_sum +=nums[i]; 
       }
        int traversing_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            total_sum-=nums[i];
            
            
            if(total_sum == traversing_sum)
            {
                return i;
            }
            traversing_sum +=nums[i];
        }
        return -1;
        
    }
};