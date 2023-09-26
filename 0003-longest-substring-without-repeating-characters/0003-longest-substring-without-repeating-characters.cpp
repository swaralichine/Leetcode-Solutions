//sliding window
//time complexity=O(n)
//space complexity=O(m)
class Solution
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> dict(256,-1);
        
        int maxlengthoflongestsubstring = 0;
        
        int start = -1;
        
        for(int i=0;i<s.length();i++)
        {
            if(dict[s[i]] > start)  //its already repeated
            {
                start = dict[s[i]];  //break the string and start again
            }
            dict[s[i]]=i;  //else store its latest index in the dictionary

            maxlengthoflongestsubstring=max(maxlengthoflongestsubstring,i-start);
        }
        return maxlengthoflongestsubstring;
    }
};

