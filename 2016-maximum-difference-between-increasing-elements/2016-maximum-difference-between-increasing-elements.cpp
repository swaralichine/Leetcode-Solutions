//time complexity
class Solution 
{
public:
    int maximumDifference(vector<int>& nums)
    {
        int ans=0;
        int mini=nums[0];
        int diff=0;
        
        for(int i=1;i<nums.size();i++)
        {
            mini=min(nums[i],mini);
            diff=nums[i]-mini;
            ans=max(ans,diff);
        }
        if(ans <= 0)
        {
            return -1;
        }
        return ans;
    }
};

