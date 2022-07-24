//Dynamic Programming
//Time Complexity = O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
        int n=prices.size();
        int profit=0;
        int effectivebuyprice=prices[0];
        
        for(int i=1;i<n;i++)
        {
            profit=max(profit,prices[i]-effectivebuyprice-fee);
            effectivebuyprice=min(effectivebuyprice,prices[i]-profit); //transaction can be performed on the same day
        }
       return profit; 
    }
};