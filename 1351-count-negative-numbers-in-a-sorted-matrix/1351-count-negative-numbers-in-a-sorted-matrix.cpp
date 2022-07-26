class Solution 
{
public:
    int countNegatives(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        int count_negative=0;
        
        for(int i=0;i<n;i++)
        {
            int left=0;
            int right=m-1;
            
            //column wise binary search
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(grid[i][mid]<0)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            count_negative=count_negative+(m-left);
        }
        return count_negative;
    }
};