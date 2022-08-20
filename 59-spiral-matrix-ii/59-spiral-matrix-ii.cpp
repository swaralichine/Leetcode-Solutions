class Solution 
{
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        //vector to store the answer
        vector<vector<int>> ans(n,vector<int>(n,1));  
        
        //declaring four pointers
        int top=0;
        int left=0;
        int bottom=n-1;
        int right=n-1;
        int count=1;
        
        while(top<=bottom && left<=right)
        {
            //filling from left to right
            for(int i=left;i<=right;i++)  //traversing the column
            {
                ans[top][i]=count;
                count++;
            }
            top++;
            //filling from top to bottom
            for(int i=top;i<=bottom;i++)
            {
                ans[i][right]=count;
                count++;
            }
            right--;
            //make sure we are on different row
            //traverse from right to left
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[bottom][i]=count;
                    count++;
                }
                bottom--;
            }
            //make sure we are on different column
            //traverse from down to up
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
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