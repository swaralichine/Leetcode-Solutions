//Time Complexity = O(n) only a single pass is needed
//Space Complexity = O(1) only two variables are used
class Solution 
{
public:
    int maxProfit(vector<int>& prices)
    {
        int minprice = INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            //first find the min price
            if(minprice>prices[i])
            {
                minprice=prices[i];
            }
            //then find the maximum profit
            else if(prices[i]-minprice>maxprofit)
            {
                maxprofit=prices[i]-minprice;
            }
        }
        return maxprofit;
    }
};