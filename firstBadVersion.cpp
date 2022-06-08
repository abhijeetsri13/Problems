/*
278. First Bad Version



Runtime: 81 ms, faster than 6.27% of C++ online submissions for Binary Search.
Memory Usage: 27.5 MB, less than 92.22% of C++ online submissions for Binary Search.
*/



// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int low=0;
        unsigned int high=n;
        unsigned int mid = (low+high)/2;
        while(mid>low && mid<high)
        {
            //cout<<"mid is "<<mid<<endl;
            if(isBadVersion(mid)==true && isBadVersion(mid-1) == false)
                return mid;
            else if(isBadVersion(mid) == true)
                high = mid;
            else
                low = mid;
            mid = (low+high)/2;
        }
        if(isBadVersion(mid)==true && isBadVersion(mid-1) == false)
                return mid;
        return mid+1;
    }
};
