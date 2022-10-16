class Solution 
{
public:
    int solve(vector<int>&nums,int index ,int d,vector<vector<int>>&dp)
    {
        if(index>=nums.size())
            return 1e9;
//         if only 1 day left than all task will be scheduled on that day and return max of those
        
        if(d == 1)
        {
            int temp = 0;
            for(int i=index;i<nums.size();i++)
            {
                temp = max(temp, nums[i]);
            }
            
            return temp;
        }
          if(dp[index][d]!=-1)
            return dp[index][d];
        
        int res = INT_MAX;
        int curr = 0;
        
        for(int i=index;i<nums.size();i++)
        {
            curr = max(curr, nums[i]);
            res = min(res, curr + solve(nums, i+1, d-1, dp));
        }
        
        return dp[index][d] = res;
    }
    int minDifficulty(vector<int>& nums, int d) 
    {
        if(nums.size()<d)
            return -1;
        
        vector<vector<int>>dp(nums.size(),vector<int>(d+1,-1));
        
        int ans=solve(nums,0,d,dp);
        return ans;
    }
};