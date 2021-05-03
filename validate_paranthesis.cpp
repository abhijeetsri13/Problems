/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 6.3 MB, less than 22.71% of C++ online submissions for Valid Parentheses.
*/
class Solution {
public:
    bool isValid(string s) {
        std::map<char, char> brackets;
        std::map<char, char>::iterator it;
        brackets[ '(' ] = ')' ;
        brackets[ '{' ] = '}' ;
        brackets[ '[' ] = ']' ;
        
        stack<char> stack_m;
        stack_m.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            it=brackets.find(s[i]);
            if(it!=brackets.end())
            {
                stack_m.push(s[i]);
            }
            else
            {
                if(stack_m.empty()) 
                    return false;
                
                it=brackets.find(stack_m.top());
                
                if(it == brackets.end())
                    return false;
                
                if(it->second == s[i])
                     stack_m.pop();
                else
                     return false;
            }
        }
        if(stack_m.empty()) 
            return true;
        return false;
    }
};