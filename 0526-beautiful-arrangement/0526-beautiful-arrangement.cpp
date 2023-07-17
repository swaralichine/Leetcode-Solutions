//time complexity = O(n!)
//space complexity = O(n)
//recursion method
class Solution 
{
public:
    void solve(int ind,vector<int> &visited,int n,int &ans)
    {
        //base case
        if(ind == n) // when the current Number becomes greater than the N means all places are filled which indicate we go the answer
        {
            ans++;
            return;
        }
        //we have to iterate through all the positions
        for(int num =1;num<=n;num++)
        {
            if(!visited[num])
            {
                if((ind+1) % num == 0 or num %(ind+1) == 0)
                {
                    visited[num]=1;
                    //recursive call
                    solve(ind+1,visited,n,ans);
                    //backtrack
                    visited[num]=0;
                }
            }
        }
        
    }
    int countArrangement(int n) 
    {
        //first we want an array whose index will start from 1
        vector<int> visited(n+1,0);  //initialize all visited with 0
        int ans=0;
        // this 1  is the Current Number we are talking
        solve(0,visited,n,ans);
        return ans;
    }
};