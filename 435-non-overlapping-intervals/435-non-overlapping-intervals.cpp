class Solution 
{
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        int y1=intervals[0][1];
        int min_removal=0;
        for(int i=1;i<intervals.size();i++)
        {
            int x2=intervals[i][0];
            int y2=intervals[i][1];
            
            if(y1 > x2)
            {
                min_removal++;
                y1=min(y1,y2);
            }
            else
            {
                y1=y2;
            }
        }
        return min_removal;
    }
};
