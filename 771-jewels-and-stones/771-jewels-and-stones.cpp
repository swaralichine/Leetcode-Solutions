class Solution 
{
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_map<char,int> mp;
        //counting the types of stones in jewels
        for(auto i:jewels)
        {
            mp[i]++;
        }
        int count=0;
        for(auto i:stones)
        {
            if(mp[i]>0)
            {
                count++;
            }
        }
        return count;
    }
};
