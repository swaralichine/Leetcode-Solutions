class Solution 
{
public:
    void solve(int ind,vector<int> &visited,int n,int &ans)
    {
        if(ind == n)
        {
            ans++;
            return;
        }
        for(int num =1;num<=n;num++)
        {
            if(!visited[num])
            {
                if((ind+1) % num == 0 or num %(ind+1) == 0)
                {
                    visited[num]=1;
                    solve(ind+1,visited,n,ans);
                    visited[num]=0;
                }
            }
        }
        
    }
    int countArrangement(int n) 
    {
        vector<int> visited(n+1,0);  //initialize all visited with 0
        int ans=0;
        solve(0,visited,n,ans);
        return ans;
    }
};