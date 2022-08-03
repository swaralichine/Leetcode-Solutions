class Solution 
{
public:
    bool isMajorityElement(vector<int>& nums, int target) 
    {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                mp[nums[i]]++;
            }
        }
        if(mp[target] > nums.size()/2)
        {
            return true;
        }
        return false;
    }
};
