//time complexity=O(s*n) s=amount,n=denomintaion
//space complexity=O(s) extra space for memoization table
//make a table
class Solution 
{
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> dp(amount+1,amount+1);
        dp[0]=0;
        
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(i>=coins[j])
                {
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        if(dp[amount]==amount+1)   //amount is exceeding the amount expected
        {
            return -1;
        }
        else
        {
            return dp[amount];    //return the amount
        }
    }
};