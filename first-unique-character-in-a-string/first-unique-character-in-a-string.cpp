//Time Complexity : O(n)
//Space Complexity : O(n)
//Can be optimized to O(1) space complexity

class Solution 
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char,int> count;
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(count[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};



