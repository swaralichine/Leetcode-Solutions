class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) 
    {
        int n=s.length();
        int i=0,j=0,ans=0,cost=0;
        for(;j<n;j++)
        {
            cost+=abs(s[j]-t[j]);
            for(;cost>maxCost;i++)
            cost-=abs(s[i]-t[i]);
            ans=max(ans,j-i+1);
        }    
        return ans;
    }
};
