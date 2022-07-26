//DP Approach
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        if(nums.size()<3)
        {
            return 0;
        }
        int dp=0;
        int count=0;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2])
            {
                dp++;
                count=count+dp;
            }
            else
            {
                dp=0;
            }
        }
        return count;
    }
};