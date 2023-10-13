class Solution 
{
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
      vector<int> ans(cost.size());
      int n = cost.size();
       ans[0] = cost[0];
       ans[1] = cost[1];
        
       for(int i=2;i<n;i++)
       {
           ans[i] = cost[i] + min(ans[i-1],ans[i-2]);
       }
        return min(ans[n-1],ans[n-2]);
    }
};
