//Time Complexity=O(row*column)
//Space Complexity=O(row*column)
//DP
class Solution 
{
public:
    
    
    int minPathSum(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        

        for (int i = grid.size() - 1; i >= 0; i--) {
        for (int j = grid[0].size() - 1; j >= 0; j--) {
            if (i == grid.size() - 1 && j != grid[0].size() - 1)
                grid[i][j] = grid[i][j] + grid[i][j + 1];
            else if (j == grid[0].size() - 1 && i != grid.size() - 1)
                grid[i][j] = grid[i][j] + grid[i + 1][j];
            else if (j != grid[0].size() - 1 && i != grid.size() - 1)
                grid[i][j] = grid[i][j] + std::min(grid[i + 1][j], grid[i][j + 1]);
        }
    }
    return grid[0][0];
        
    
    }
};