class Solution 
{
public:
    char repeatedCharacter(string s) 
    {
        // Creating unordered map
        // unordered_map is faster than ordered_map (since we need faster solution)
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]==1)    //already visited, now visiting it for the second time hence return
            {
                return s[i];
            }
            else
            {
                mp[s[i]]++;
            }
        }
        //default return 
        return 'a';
    }
};
