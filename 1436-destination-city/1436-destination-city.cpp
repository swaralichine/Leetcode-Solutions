//Time Complexity=O(n)
//Space Complexity=O(n)
//Using the logic the start and end cities will always have count one
class Solution
{
public:
    string destCity(vector<vector<string>>& paths) 
    {
        map<string,int> mp;
        for(auto i:paths)
        {
            mp[i[0]]++;
            mp[i[1]]++;
        }
        
        vector<string> ans;
        
        for(auto i:mp)
        {
            if(i.second==1)
            {
                ans.push_back(i.first);
            }
        }
        for(auto i:paths)
        {
            if(ans[0]==i[1])
            {
                return ans[0];
            }
        }
        return ans[1];
    }
};





