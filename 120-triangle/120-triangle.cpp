//Add the minimum values from lower rows to higher rows in the triangle.
//Start from second to the last row, and work up by adding the minimum value for each row.
//Top of triangle will have the minimum sum for the entire triangle because you are saving the minmum sum on each row.
class Solution 
{
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        //sum minimum triangle from bottom to the top
        for(int r=triangle.size()-2;r>=0;r--)
        {
            //start from second to last row, and go up
            for(auto c=0;c<triangle[r].size();c++)
            {
                triangle[r][c]=triangle[r][c]+min(triangle[r+1][c],triangle[r+1][c+1]);   //add minimum
            }
        }
        //top of triangle is always minimum sum
        return triangle[0][0];
    }
};

