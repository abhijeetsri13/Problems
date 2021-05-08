class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	if(n==0||n==1)
    	return n;
    	
        //int sz = n;//sizeof(arr) / sizeof(arr[0]);
        int max_platform = 0;
        int current_trains = 0;
        int i=0,j=0;
        vector<int> arrival(arr, arr + n);
        vector<int> depart(dep, dep + n);
        
        sort(arrival.begin(), arrival.end() );
        sort(depart.begin(), depart.end() );

        while(i<n && j<n)
        {
            if(arrival[i] <= depart[j])
                {
                    current_trains++;
                    i++;//j++;
                }
            else if(arrival[i] > depart[j])
            {
                current_trains--;
                j++;
            }
            if(current_trains > max_platform)  
                max_platform = current_trains;
        }
        return 	max_platform;
    }
};
