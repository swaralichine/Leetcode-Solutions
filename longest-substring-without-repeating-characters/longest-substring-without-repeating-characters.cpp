//time complexity=O(n)
//space complexity=O(m)
class Solution
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> dict(256,-1);
        int max_len=0;
        int start=-1;
        
        for(int i=0;i<s.length();i++)
        {
            if(dict[s[i]] > start)
            {
                start=dict[s[i]];
            }
            dict[s[i]]=i;  //update to the latest position
            max_len=max(max_len,i-start);
        }
        return max_len;
    }
};