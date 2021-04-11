class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int current_sum=0;
        int overallBest = INT_MIN;    
        for(int i=0;i<n;i++)
        {
            int temp_sum = current_sum;
            current_sum = current_sum +arr[i];
            if(current_sum < arr[i])
            {
                current_sum = arr[i];
            }
            if(current_sum > overallBest)
            {
                overallBest = current_sum;
            }
            //std::cout<<"Overall:- "<<overallBest<<std::endl;
            //std::cout<<"current_sum:- "<<current_sum<<std::endl<<std::endl;
        }
        return overallBest;
        // Your code here
        
    }
};
