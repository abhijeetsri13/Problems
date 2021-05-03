class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        if(k<2)
            return;
        k=k>n?n:k;
        int i,j;
        for( j=0;j<n/k;j++){
            reverse(arr.begin()+j*k, arr.begin()+j*k+k);
        }
        if(((j-1)*k+k)<n)
            reverse(arr.begin()+(j-1)*k+k, arr.end());
        
    }
};
