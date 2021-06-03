/*

Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Example 2:

Input: s = " "
Output: 0
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.

Runtime: 4 ms, faster than 64.24% of C++ online submissions for Length of Last Word.
Memory Usage: 6.5 MB, less than 21.21% of C++ online submissions for Length of Last Word.


*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int ret=0;
        if(s[i]==' ')
        {while(s[i]==' ' && i>0)    
                i--;
        }
        while((i>=0)&&(s[i]!=' ') )
        {
            i--;ret++;
        }
      
        return ret;
        
    }
};