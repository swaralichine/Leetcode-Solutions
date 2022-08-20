class Solution 
{
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        //vector to store the answer
        vector<vector<int>> ans(n,vector<int>(n,1));  
        
        //declaring four pointers
        int up=0;
        int left=0;
        int down=n-1;
        int right=n-1;
        int count=1;
        
        while(up<=down && left<=right)
        {
            //filling from left to right
            for(int i=left;i<=right;i++)  //traversing the column
            {
                ans[up][i]=count;
                count++;
            }
            up++;
            //filling from top to bottom
            for(int i=up;i<=down;i++)
            {
                ans[i][right]=count;
                count++;
            }
            right--;
            //make sure we are on different row
            //traverse from right to left
            if(up<=down)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[down][i]=count;
                    count++;
                }
                down--;
            }
            //make sure we are on different column
            //traverse from down to up
            if(left<=right)
            {
                for(int i=down;i>=up;i--)
                {
                    ans[i][left]=count;
                    count++;
                }
                left++;
            }
        }
        return ans;
    }
};