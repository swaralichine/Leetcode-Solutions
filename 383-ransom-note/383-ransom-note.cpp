class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    { 
        map<char,int> count;
        for(char c:ransomNote)
        {
            count[c]++;
        }
        for(char c:magazine)
        {
            count[c]--;
        }
        for(auto c:count)
        {
            if(c.second > 0)
            {
                return false;
            }
        }
        return true;
    }
};
