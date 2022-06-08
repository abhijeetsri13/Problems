/*
704. Binary Search
Runtime: 81 ms, faster than 6.27% of C++ online submissions for Binary Search.
Memory Usage: 27.5 MB, less than 92.22% of C++ online submissions for Binary Search.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4


*/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        unsigned int low=0;
        unsigned int high=nums.size();
        unsigned int mid = (low+high)/2;
        while(mid>low && mid<high)
        {
            //cout<<"mid is "<<nums[mid]<< "at position "<<mid<<endl;
            if(nums[mid]== target)
                return mid;
            else if(nums[mid]>target)
                high = mid;
            else if(nums[mid] < target)
                low = mid;
            mid = (low+high)/2;
        }
        if(nums[mid]== target)
                return mid;
        return -1;
    }
};
