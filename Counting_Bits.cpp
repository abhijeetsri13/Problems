/*
Given an integer num, return an array of the number of 1's in the binary representation of every number in the range [0, num].

Runtime: 4 ms, faster than 90.10% of C++ online submissions for Counting Bits.
Memory Usage: 7.9 MB, less than 55.78% of C++ online submissions for Counting Bits.
*/
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> out(num+1);
        out[0]=0;        
        for(int i = 1;i<=num;i++)
        {
            out[i] = out[i/2] + i%2;
        }
        return out;

        
    }
};