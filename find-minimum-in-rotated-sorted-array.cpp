//[2,3,4,5,6,1]
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find Minimum in Rotated Sorted Array.
Memory Usage: 10.1 MB, less than 63.10% of C++ online submissions for Find Minimum in Rotated Sorted Array.
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int L=0;
        int R=nums.size()-1;
        int mid;
        int smallest=0;
        smallest=~smallest;
        smallest = smallest >> 1;
        //[1] or [1, 2, 3]
        if (nums[R] > nums[0] || R==0) {
      return nums[0];
    }
        
        while(L<=R)
        {
            mid = L+(R-L)/2;
            if(nums[mid] < smallest){
                smallest=nums[mid];    
            }
           if(nums[mid+1]<nums[mid])
           {
               return nums[mid+1];
           }
            if(nums[mid-1]>nums[mid])
           {
               return nums[mid];
           }
           if(nums[L] < nums[R])
           {
               return nums[L];
           }
            //7 8 9 10 11 12 13 14 1 2 3 4 5 6 
            if(nums[mid] > nums[R])
            {
                L=mid;
            }
            //13 14 1 2 3 4 5 6 7 8 9 10 11 12 
            if(nums[mid] < nums[R])
            {
                R=mid;
            }
        }
        return smallest;
    }
};
