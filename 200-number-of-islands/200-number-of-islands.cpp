//time complexity=O(rc)
//space complexity=O(rc)
class Solution {
public:
    void dfs(vector<vector<char>>& grid,int x,int y)
    {
        //checking the constraints and if the cell is not one
        if(x < 0 || y < 0 || x >= grid.size() || y >=grid[0].size() || grid[x][y]!='1')
        {
            return;
        }
        //make the current cell zero to mark it visited (in order to not visit it again)
        grid[x][y]=0;
        
        dfs(grid,x-1,y);
        dfs(grid,x+1,y);
        dfs(grid,x,y-1);
        dfs(grid,x,y+1); 
    }  
        
    int numIslands(vector<vector<char>>& grid) 
    { 
        int n=grid.size();
        int m=grid[0].size();
        
        int noofislands=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    noofislands++;
                    dfs(grid,i,j);   //check the neighboring cells to club them together
                }
            }
        }
        return noofislands;
    }
};