

/*
Write a program to print all the LEADERS in the array. 
An element is leader if it is greater than all the elements to its right side. 
And the rightmost element is always a leader. 


For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2. 
Let the input array be arr[] and size of the array be size.
 
 */


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
