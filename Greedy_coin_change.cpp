/*

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Example 3:

Input: coins = [1], amount = 0
Output: 0
Example 4:

Input: coins = [1], amount = 1
Output: 1
Example 5:

Input: coins = [1], amount = 2
Output: 2
 

*/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        int min_num_coins=INT_MAX;
        if(amount ==0)
            return amount;
        for(int i=coins.size()-1;i>=0;i--)
        {
            int temp_amount=amount;
            int num_coin=0;
            for(int j=i; j>=0;j--)
            {
                if(temp_amount>=coins[j])
                {
                    temp_amount =temp_amount- coins[j];
                    num_coin++;
                    j++;
                }
            }
            
            if(temp_amount==0 && (num_coin < min_num_coins))
            {
                min_num_coins = num_coin;      
            }
                
        }
        if(min_num_coins == INT_MAX)
            return -1;
        return min_num_coins;
    }
};