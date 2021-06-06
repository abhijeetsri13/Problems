/*
In a party of N people, each person is denoted by an integer. Couples are represented by the same number. Find out the only singe person in the party of couples.

Example 1:

Input: N = 5
arr = {1, 2, 3, 2, 1}
Output: 3
Explaination: Only the number 3 is single.

Example 2:

Input: N = 11
arr = {1, 2, 3, 5, 3, 2, 1, 4, 5, 6, 6}
Output: 4
Explaination: 4 is the only single.

Your Task:
You do not need to read input or print anything. Your task is to complete the function findSingle() which takes the size of the array N and the array arr[] as input parameters and returns the only single person.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 104
1 ≤ arr[i] ≤ 106

Company Tags
Topic Tags
Related Interview Experiences

If you are facing any issue on this page. Please let us know.

Output Window




*/

class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        int res=arr[0];
        for(int i=1;i<N;i++)
            res=res^arr[i];
        
        return res;
    }
};