//time complexity=O(n)
//Space complexity=O(1)
//use gauss formula
class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int ans=0;
        int n=nums.size();
        int expected_sum = n*(n+1)/2;
        
        for(int i=0;i<n;i++)
        {
            ans = ans + nums[i];
        }
        
        return expected_sum-ans;
    }
};