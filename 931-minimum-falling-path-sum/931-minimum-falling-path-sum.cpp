//Time Complexity=O(n*n)
//Space Complexity=O(n*n)
class Solution 
{
public:
    int dp[101][101];
    int minFallingPathSum(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        
        //filling the first row which is the same as that of matrix
        for(int i=0;i<n;i++)
        {
            dp[0][i]=matrix[0][i];
        }
        //start traversing from the next row
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int mini=10005;
                //Up element
                if(i-1>=0)
                {
                    mini=min(mini,dp[i-1][j]);
                }
                //left element
                if(i-1>=0 && j-1>=0)
                {
                    mini=min(mini,dp[i-1][j-1]);
                }
                //right element
                if(i-1>=0 && j+1<n)
                {
                    mini=min(mini,dp[i-1][j+1]);
                }
                //add the minimum to the matrix value
                dp[i][j]=mini+matrix[i][j];
            }
        }
        //initializing the minimum ans value
        int ans=dp[n-1][0];
        for(int i=1;i<n;i++)
        {
            ans=min(ans,dp[n-1][i]);
        }
        return ans;
    }
};