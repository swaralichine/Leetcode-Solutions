//Time - O(n * k)
//Space - O(n * k)
class Solution 
{
public:
    int maxProfit(int k, vector<int>& a) 
    {
         int n=a.size();
        
		// 0 days or 0 transactions
        if(n==0 || k==0)
            return 0;
        
        int i,j,mxp;
        int dp[k+1][n];
        
        for(i=0;i<=k;i++)
        {
            mxp=INT_MIN;
            for(j=0;j<n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else
                {
					mxp=max(mxp,dp[i-1][j-1]-a[j-1]);
                    dp[i][j]=max(dp[i][j-1],mxp+a[j]);
                }
            }
        }
        
        return dp[k][n-1];   
    }
};