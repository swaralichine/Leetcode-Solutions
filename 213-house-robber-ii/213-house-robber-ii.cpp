//DP
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    int solve(vector<int> nums)
    {
        if(nums.size() == 0)
        {
            return 0;
        }
        int n=nums.size();
        vector<int> a(n);
        if(n>=1)
        {
            a[0]=nums[0];
        }
        if(n>=2)
        {
            a[1]=max(nums[0],nums[1]);
        }
        for(int i=2;i<n;i++)
        {
            a[i]=max(a[i-1],a[i-2]+nums[i]);
        }
        return a[n-1];
    }
    
    int rob(vector<int>& nums)
    {
      if(nums.size() == 0)
      {
          return 0;
      }
        if(nums.size() == 1)
        {
            return nums[0];
        }
        return max(solve(vector<int>(nums.begin(),nums.end()-1)),solve(vector<int>(nums.begin()+1,nums.end())));
    }
};