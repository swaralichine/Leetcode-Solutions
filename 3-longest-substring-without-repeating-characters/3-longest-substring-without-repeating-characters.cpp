//Using map 
//Time Complexity = O(n)
class Solution 
{
public:
int lengthOfLongestSubstring(string s) 
 {
        int l=0, r=0, longest=0;
        unordered_map<char, int> m;    //map to store the count of elements
        while(r < s.length())
        {
            m[s[r]]++;      //count the characters
            while(m[s[r]]>1)    
            {
                m[s[l]]--;
                l++;
            }
            longest=max(longest, r-l+1);   //calculating the current maximum length
            r++;
        }
        return longest;
 }
};



