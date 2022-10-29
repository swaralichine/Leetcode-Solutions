//time complexity=O(nlogn)
//space complexity=O(n)
class Solution 
{
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) 
    {
        int n = plantTime.size();
        
        //storing growtime and planttime in pair for easy access
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({growTime[i],plantTime[i]});
        }
        //sort according to growtime
        sort(v.begin(),v.end());
        
        //reverse to get the flower that takes more time to bloom and we plant that first
        reverse(v.begin(),v.end());
        
        int days=0;
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            days = days + v[i].second;
            
            //ans will store the maximum days required to bloom all the plants till this index
            ans = max(ans, days+v[i].first);
        }
        return ans;
    }
};
