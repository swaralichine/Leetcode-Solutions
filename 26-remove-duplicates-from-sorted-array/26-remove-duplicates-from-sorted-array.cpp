//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()==0)
        {
            return 0;
        }
        int ans = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[ans])
            {
                ans++;
                nums[ans]=nums[i];
            }
        }
        return ans+1;
    }
};


