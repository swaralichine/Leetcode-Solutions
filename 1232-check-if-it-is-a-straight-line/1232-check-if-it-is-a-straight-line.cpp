class Solution 
{
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        //difference in x and y of first and second point
        int xdiff=(coordinates[1][0]-coordinates[0][0]);
        int ydiff=(coordinates[1][1]-coordinates[0][1]);
        
        //traverse whole array
        for(int i=2;i<coordinates.size();i++)
        {
            //calculating the x and y difference between current and previous point
            int xcurrdiff=(coordinates[i][0]-coordinates[i-1][0]);
            int ycurrdiff=(coordinates[i][1]-coordinates[i-1][1]);
            
            //checking the slope : points in same staright line have same slope value
            if(xdiff*ycurrdiff != ydiff*xcurrdiff)
            {
                return false;  //slope is different
            }
        }
        return true;  //all points have same slope hence staright line is possible
    }
};



