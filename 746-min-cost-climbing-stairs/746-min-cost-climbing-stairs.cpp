//Dynamic Programming
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
      int n=cost.size();
      vector<int> mincost(n+1,0);
      mincost[0]=0;
      mincost[1]=0;
      for(int i=2;i<=n;i++)
      {
          mincost[i]=min(cost[i-1]+mincost[i-1], cost[i-2]+mincost[i-2]);
      }
        return mincost[n];
    }
};


