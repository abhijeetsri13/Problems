/*

Runtime: 4 ms, faster than 75.65% of C++ online submissions for Implement strStr().
Memory Usage: 7.1 MB, less than 12.50% of C++ online submissions for Implement strStr().

*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        //int ret=-1;
        int len_hey=haystack.length();
        int len_ned=needle.length();
        int i=1;
        int j=0;
        if(!len_ned)
            return 0;
        if(len_hey <len_ned)
            return -1;
        vector<int> n_ve(len_ned+1, 0);
        n_ve[0]=0;
        while(i<len_ned)
        {
            //cout<<i<<" "<<j<<endl;
            if(needle[i] == needle[j])
            {
                j++;
                n_ve[i] = j;
                i++;
            }
            else
            {
                if(j==0)
                {
                    n_ve[i+1]=0;
                    i++;
                }
                else
                    j=n_ve[j-1];
            }
        }
        i=j=0;
        while(i<=len_hey)
        {
            if(haystack[i] == needle[j])
            {
            //    cout<<j<<" "<<len_ned<<endl;
                if((j)==len_ned-1)
                {
                    return i-j;
                }
                i++;j++;
            }
            else
            {
                if(j!=0)
                    j=n_ve[j-1];
                else
                    i++;
                
            }
        }
        return -1;
        
    }
};