//time complexity=O(nlogn)  sorting takes this time
//space complexity=O(1)
class Solution 
{
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        int ans=0;
        int left=-1;
        int right=-1;
        
        sort(intervals.begin(),intervals.end());
        
        for(auto v : intervals)
        {
            if(v[0] > left && v[1] > right)
            {
                left=v[0];
                ans++;
            }
            right=max(right,v[1]);
        }
        return ans;
    }
};
