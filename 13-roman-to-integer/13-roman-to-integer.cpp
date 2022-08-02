//Time Complexity=O(1)
//Space Complexity=O(1)
class Solution 
{
public:
    int romanToInt(string s) 
    {
        int ans=0;
        map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()-1 && mp[s[i]]<mp[s[i+1]])
            {
                ans=ans-mp[s[i]];
            }
            else
            {
                ans=ans+mp[s[i]];
            }
        }
        return ans;
    }
};




