class Solution 
{
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
        vector<vector<int>> result;
        int i=0,n=intervals.size();
        
        //situation 1 : all non overlapping intervals before the the newinterval
        while(i < n && intervals[i][1] < newInterval[0])
        {
            result.push_back(intervals[i++]);
        }
        
        //situation 2 : interval is merging
        vector<int> mI = newInterval;
        while(i <n && intervals[i][0] <= newInterval[1])
        {
            mI[0] = min(mI[0],intervals[i][0]);
            mI[1] = max(mI[1],intervals[i++][1]);
        }
        result.push_back(mI);
        
        while(i < n)
        {
            result.push_back(intervals[i++]);
        }
        return result;
    }
};