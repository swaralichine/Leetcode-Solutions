class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        int i=0,j=0;
        while(i < s.size() and j<t.size())
        {
            if(s[i] == t[j])  
            {
                i++;
            }
            j++;   //j pointer is for the longer string
        }
        if(i==s.size())   //i pointer is for the smaller string
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

