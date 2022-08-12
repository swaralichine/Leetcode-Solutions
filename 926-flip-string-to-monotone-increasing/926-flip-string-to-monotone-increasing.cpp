//Time Complexity=O(n)
//Space Complexity=O(1)
//dp approach
class Solution 
{
public:
    int minFlipsMonoIncr(string s) 
    {
        int n=s.length();
        int ones=count(s.begin(),s.end(),'1');
        int ans=min(ones,n-ones);
        int now=0;  //no of ones from 0 to i
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                now++;
            }
            int curr=now+((n-i-1)-(ones-now));
            ans=min(ans,curr);
        }
        return ans;
    }
};