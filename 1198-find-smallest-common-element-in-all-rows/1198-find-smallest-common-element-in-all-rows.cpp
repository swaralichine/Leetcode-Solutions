class Solution 
{
public:
    int smallestCommonElement(vector<vector<int>>& nums) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
                if(mp[nums[i][j]] == nums.size())
                {
                    return nums[i][j];
                }
            }
        }
        return -1;
    }
};


 

