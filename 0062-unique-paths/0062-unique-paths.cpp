//Bottom up approach
//Time Complexity=O(mn)
//Space Complexity=O(mn)
class Solution 
{
public:
    int uniquePaths(int m, int n) 
    {
        //m=column
        //n=row
        //for storing the unique path counts
        vector<vector<int>> paths(n,vector<int>(m));
        
        //filling last row=1
        for(int c=0;c<m;c++)
        {
            paths[n-1][c]=1;
        }
        
        //filling last col=1
        for(int r=0;r<n;r++)
        {
            paths[r][m-1]=1;
        }
        
        for(int r=n-2;r>=0;r--)
        {
            for(int c=m-2;c>=0;c--)
            {
                paths[r][c]=paths[r][c+1]+paths[r+1][c];
            }
        }
        return paths[0][0];
    }
};