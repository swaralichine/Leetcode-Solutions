//Time Complexity = O(n)
//Space Complexity = O(n)
class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        if(s.size() != t.size())
        {
            return false;
        }
        unordered_map<char,vector<int>> mp1,mp2;
        
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]].push_back(i);   
            mp2[t[i]].push_back(i);
            
            if(mp1[s[i]] != mp2[t[i]])
            {
                return false;
            }
        }
        return true;
    }
};


