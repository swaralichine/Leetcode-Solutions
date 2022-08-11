class Solution 
{
public:
    int balancedStringSplit(string s) 
    {
        vector<int> count(2);
        int pair=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                count[0]++;
            }
            if(s[i]=='L')
            {
                count[1]++;
            }
            if(count[0]==count[1])
            {
                pair++;
            }
        }
        return pair;
    }
};