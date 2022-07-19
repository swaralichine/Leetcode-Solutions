//DFS Approach
class Solution 
{
    bool isSubIsland(vector<vector<int>> & grid , vector<vector<int>> & grid2, int r, int c)
    {
        if(r < 0 || c < 0 || r == grid.size() || c == grid[0].size() || grid[r][c] != 1) 
            return true;
        grid[r][c] = 2;
        
        bool up = isSubIsland(grid,grid2,r-1,c);
        bool down = isSubIsland(grid,grid2,r+1,c);
        bool left = isSubIsland(grid,grid2,r,c-1);
        bool right = isSubIsland(grid,grid2,r,c+1);
        
        return grid2[r][c] && up && down && left && right;
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        int n = grid1.size(), m = grid1[0].size();
        
        int count_sub_islands = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(grid2[i][j] == 1)
                {
                    count_sub_islands = count_sub_islands + isSubIsland(grid2,grid1,i,j);
                }
            }
        }
        return count_sub_islands;
    }
};