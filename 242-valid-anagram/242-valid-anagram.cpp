class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
       map <int,int> count;
       if(s.length() != t.length())
       {
           return false;
       }
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            if(count[t[i]] <=0)
            {
                return false;
            }
            count[t[i]]--;
        }
        return true;
    }
};

