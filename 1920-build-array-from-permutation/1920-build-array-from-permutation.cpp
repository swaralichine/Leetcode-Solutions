//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i] + (nums[nums[i]]%n)*n;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]/n;
        }
        return nums;
    }
};

