//Greedy approach
//Time Complexity=O(nlogn)
//Space Complexity=O(1)
class Solution 
{
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end());
        //storing the first coordinate's end point
        int y1=points[0][1];
        int min_balloons=1;
        for(int i=1;i<points.size();i++)
        {
            //the second points
            int x2=points[i][0];
            int y2=points[i][1];
            
            //comparing the start of the next point with the end of the previous one
            if(y1>=x2)
            {
                y1=min(y1,y2);
            }
            else
            {
                min_balloons++;
                y1=y2;
            }
        }
        return min_balloons;
    }
};
