class Solution 
{
public:
    int minOperations(vector<int>& nums) 
    {
        int min_operations=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                continue;
            }
            else
            {
                min_operations=min_operations+abs(nums[i]-nums[i-1])+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return min_operations;
    }
};
