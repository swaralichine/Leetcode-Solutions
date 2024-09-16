class Solution 
{
public:
    int findMinDifference(vector<string>& timePoints) 
    {
        int n=timePoints.size();
        vector<int> ans(n);
        
        for(int i=0;i<n;i++)
        {
            ans[i]=stoi(timePoints[i].substr(0,2))*60 + stoi(timePoints[i].substr(3,2));
        }
        
        sort(ans.begin(),ans.end());
        
        int result=INT_MAX;
        
        for(int i=1;i<n;i++)
        {
            result=min(result,ans[i]-ans[i-1]);
        }
        
        //for first and last for wrap around time
        result=min(result,ans[0]-ans[n-1]+24*60);
        
        return result;
    }
};

