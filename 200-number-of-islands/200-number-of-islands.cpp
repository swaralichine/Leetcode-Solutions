class Solution {
public:
    void dfs(vector<vector<char>>& grid,int x,int y)
    {
        grid[x][y]='0';
    
        if(x+1 <grid.size() && grid[x+1][y]=='1')
        {
            dfs(grid,x+1,y);
        }
        if(x-1 >=0 && grid[x-1][y]=='1')
        {
            dfs(grid,x-1,y);
        }
        if(y+1 <grid[0].size() && grid[x][y+1]=='1')
        {
            dfs(grid,x,y+1);
        }
        if(y-1 >=0 && grid[x][y-1]=='1')
        {
            dfs(grid,x,y-1);
        }
    }  
        
    int numIslands(vector<vector<char>>& grid) 
    { 
      int H = grid.size();
      if(!H)
      {
          return 0;
      }
        int W=grid[0].size();
        if(!W)
        {
            return 0;
        }
        int noofislands=0;
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                if(grid[i][j]=='1')
                {
                   noofislands++;
                    dfs(grid,i,j);
                }
            }
        }
        return noofislands;
    }
};