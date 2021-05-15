/*
Given two integers a and b, return the sum of the two integers without using 
the operators + and -.





Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Two Integers.
Memory Usage: 5.9 MB, less than 24.94% of C++ online submissions for Sum of Two Integers.
*/
class Solution {
public:
    int getSum(int a, int b) 
    {
        while(b != 0)
        {   
            
            
            // 0x7fffffff; for negative numbers like -1 + 1
            int carry= (a & b) & 0x7fffffff;
           // cout<<"carry "<< carry<<endl;;
            a = a ^ b;
            b = carry << 1;            
        }
        return a;
    }
};