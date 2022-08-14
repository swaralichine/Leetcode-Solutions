//Find the list of nodes from where water can flow to BOTH Pacific and Atlantic Ocean
//DFS Recursive approach
//Pacific Ocean - Up and Left
//Atlantic Ocean - Down and Right
//time complexity=O(rc)
//space complexity=O(rc)
class Solution
{
public:
    vector<vector<int>> res;
    
    //pacific ocean function
    void pacificocean(vector<vector<int>>& matrix,int r,int c, vector<vector<int>> &grid)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        
        if(grid[r][c]==1)
        {
            return;
        }
        grid[r][c]=1;  //visited
        
        //storing the directions
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        
        for(int i=0;i<4;i++)
        {
            int rr=r+dr[i];
            int cc=c+dc[i];
            
            if(rr>=0 && rr<n && cc>=0 && cc<m && matrix[rr][cc] >= matrix[r][c])
            {
                pacificocean(matrix,rr,cc,grid);
            }
        }
        
    }
    
    //atlantic ocean function
    void atlanticocean(vector<vector<int>>& matrix,int r,int c, vector<vector<int>> &grid)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        
        if(grid[r][c]==1)    //visited pacific
        {
            res.push_back({r,c});
        }
        if(grid[r][c]==2)
        {
            return;
        }
        grid[r][c]=2;
        
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        
        for(int i=0;i<4;i++)
        {
            int rr=r+dr[i];
            int cc=c+dc[i];
            
            if(rr>=0 && rr<n && cc>=0 && cc<m && matrix[rr][cc] >= matrix[r][c])
            {
                atlanticocean(matrix,rr,cc,grid);
            }
        }
    }
    
    
    //main function
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        int n=heights.size();   //row size
        if(n==0)
        {
            return res;
        }
        int m=heights[0].size();    //column size
        
      vector<vector<int>> grid(n,vector<int>(m,0));  //storing cell is pacific or atlantic
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                {
                    pacificocean(heights,i,j,grid);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==n-1 || j==m-1)
                {
                    atlanticocean(heights,i,j,grid);
                }
            }
        }
        return res;
    }
};