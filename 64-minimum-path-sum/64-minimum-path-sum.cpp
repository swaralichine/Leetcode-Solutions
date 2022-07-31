//Time Complexity=O(row*column)
//Space Complexity=O(row*column)
class Solution 
{
public:
    int solve_minpath(int i,int j,vector<vector<int>> &grid,vector<vector<int>>& dp)
    {
        if(i==0 && j==0)
        {
            return grid[i][j];
        }
        //going out of bounds
        if(i<0 || j<0)
        {
            return 1e9;  //adding a very large number
        }
        if(dp[i][j] != -1) 
        {
            return dp[i][j];
        }
        
        int left=grid[i][j] + solve_minpath(i,j-1,grid,dp);
        int up=grid[i][j] + solve_minpath(i-1,j,grid,dp);
        
        dp[i][j]=min(left,up);
        return dp[i][j];
           
    }
    
    int minPathSum(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> dp (n, vector<int>(m, -1));
        
        return solve_minpath(n-1,m-1,grid,dp);
    }
};