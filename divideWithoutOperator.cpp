/*
Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

Return the quotient after dividing dividend by divisor.

The integer division should truncate toward zero, which means losing its fractional part. For example, truncate(8.345) = 8 and truncate(-2.7335) = -2.

Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, assume that your function returns 231 − 1 when the division result overflows.



Runtime: 0 ms, faster than 100.00% of C++ online submissions for Divide Two Integers.
Memory Usage: 5.9 MB, less than 70.81% of C++ online submissions for Divide Two Integers.
*/
class Solution {
public:
    long abs(long n) { return n > 0 ? n : -n; }
    
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if(divisor == 1)
            return dividend;
        long m_dividend = abs(dividend);
        long m_divisor = abs(divisor);
        bool sign=(dividend<0)^(divisor<0);
        int result=0;
        while(m_dividend >= m_divisor)
        {
            int x=0;
            while((m_dividend-(m_divisor<<1<<x)) >=0)
                x++;
            result +=(1<<x);
            m_dividend = m_dividend - (m_divisor<<x);
        }
        if(sign)
            return -result;
        else
            return result;
    }
};