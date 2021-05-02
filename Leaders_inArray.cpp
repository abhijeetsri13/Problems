class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> out;
        int t_max=a[n-1];
        out.push_back(t_max);
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=t_max){
                t_max = a[i];
                out.push_back(t_max);
            }
        }
        sort(out.begin(), out.end(), greater<int>());
        return out;
    }
};
