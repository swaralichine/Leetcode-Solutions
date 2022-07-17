//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int min=INT_MAX,index=-1,diff;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                diff=abs(x-points[i][0])+abs(y-points[i][1]);
                if(diff<min)
                {
                    min=diff;
                    index=i;
                }
            }
        }
        return index;
    }
};




