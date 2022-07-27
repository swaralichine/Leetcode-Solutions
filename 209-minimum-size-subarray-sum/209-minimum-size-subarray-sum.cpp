//Using two pointers
//Time Complexity=O(n)
//Space Complexity=O(1)
//Take two pointers:left and right
//Start adding the nums to sum
//When the sum >=target, then start finding the min length 
//Also start subtracting nums[left] from the sum
class Solution 
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int len=INT_MAX;
        while(right<n)
        {
            sum=sum+nums[right++];
            while(sum>=target)
            {
                len=min(len,right-left);
                sum=sum-nums[left++];
            }
        }
        if(len==INT_MAX)
        {
            return 0;
        }
        else
        {
            return len;
        }
    }
};