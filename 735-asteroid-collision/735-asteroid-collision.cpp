//time complexity=O(n)
//space compplexity=O(n)
class Solution 
{
public:
    vector<int> asteroidCollision(vector<int>& a)
    {
        int i,n=a.size();
        vector<int> ans;
        
        for(i=0;i<n;i++)
        {
            if(ans.empty() || a[i]>0)  //if positive
                ans.push_back(a[i]);
            else
            {
                while(!ans.empty() && ans.back()>0 && ans.back()<abs(a[i]))  
                    ans.pop_back();
                
                if(ans.empty() || ans.back()<0)   //if negative
                    ans.push_back(a[i]);
                
                if(!ans.empty() && ans.back()>0 && ans.back()==abs(a[i]))
                    ans.pop_back();
            }
        }
        
        return ans;
    }
};

