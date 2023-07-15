//two pointers
//Time complexity: o(n^2)
//Space complexity: O(1)
class Solution 
{
public:
    int palindromicsubstrings(string &str, int start, int end)
    {
        int count = 0;
        while(start >= 0 && end < str.length() && str[start] == str[end])
        {
            start--;
            end++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) 
    {
       int ans=0;
       for(int i=0;i<s.size();i++)
       {
           ans = ans + palindromicsubstrings(s,i,i) + palindromicsubstrings(s,i,i+1);  //for even and odd strings
       }
        return ans;
    }
};