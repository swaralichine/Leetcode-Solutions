class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> count;
        for(auto x:nums)
        {
            count[x]++;
        }
        for(auto x:count)
        {
            if(x.second >=2)
            {
                return true;
            }
        }
        return false;
    }
};
