//Time Complexity=O(mn)
//Space complexity=O(1)
class Solution 
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        
        int rows=matrix.size();
        int col=matrix[0].size();
        
        //declaring four pointers
        int up=0;
        int left=0;
        int down=rows-1;
        int right=col-1;
        
        while(ans.size() < rows*col)
        {
            //traverse from left to right
            for(int col=left;col<=right;col++)
            {
                ans.push_back(matrix[up][col]);
            }
            //traverse downwards
            for(int row=up+1;row<=down;row++)
            {
                ans.push_back(matrix[row][right]);
            }
            //make sure we are on different row
            //traverse from right to left
            if(up!=down)
            {
                for(int col=right-1;col>=left;col--)
                {
                    ans.push_back(matrix[down][col]);
                }
            }
             //make sure we are on different column
              //traverse from down to up
            if(left!=right)
            {
                //traverse upwards
                for(int row=down-1;row>up;row--)
                {
                    ans.push_back(matrix[row][left]);
                }
            }
            left++;
            right--;
            up++;
            down--;
        }
        return ans;
    }
};