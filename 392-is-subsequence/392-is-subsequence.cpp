class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        int i=0,j=0;
        while(i < t.size() and j<s.size())
        {
            if(t[i] == s[j])
            {
                j++;
            }
            i++;
        }
        if(j==s.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

