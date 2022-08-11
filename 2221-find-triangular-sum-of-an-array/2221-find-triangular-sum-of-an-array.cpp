//time complexity=O(n^2)
//space complexity=O(1)
class Solution 
{
public:
    int triangularSum(vector<int>& nums) 
    {
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            int k = 0;
            for(int j=0;j<nums.size()-i-1;j++)
            {
                nums[k++] = (nums[j]+nums[j+1])%10;
            }
        }
        return nums[0];
    }
};





