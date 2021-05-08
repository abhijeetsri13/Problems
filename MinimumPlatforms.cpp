class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	if(n==0||n==1)
    	return n;
    	 int max_platform = 0;
    	 std::list<int> current;
    	 for (int i=0;i<n;i++)
    	 {
    	     
    	     if(current.size() !=0)
    	     {
    	         current.push_back(dep[i]);
    	         //current.remove_if([](int n){ return n <= arr[i]; });
    	          for (auto it = current.begin(); it != current.end(); ) {
                        if (*it <arr[i]) {
                            it = current.erase(it);
                        } else {
                            ++it;
                        }
                    }
    	     }
    	     else
    	     {
    	         current.push_back(dep[i]);
    	     }
    	     if(current.size() > max_platform)  
    	        max_platform = current.size();
    	   //cout<<"Test"<<current.size()<<endl;
    	   //cout<<"Test__"<<max_platform<<endl;
    	     
    	 }
    	 return max_platform;
    }
};