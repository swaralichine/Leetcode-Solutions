//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    string toLowerCase(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 and s[i]<=90)
            {
                s[i]+=32;
            }
        }
        return s;
    }
};