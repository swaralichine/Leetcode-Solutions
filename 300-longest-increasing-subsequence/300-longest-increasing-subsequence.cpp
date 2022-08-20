class Solution 
{
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        vector<int> ans;
        ans.push_back(nums[0]);
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > ans.back())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                // find index of just greater number
                int index=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[index]=nums[i];
            }
        }
        return ans.size();
    }
};