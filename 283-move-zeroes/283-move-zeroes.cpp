//Two pointers
//Time Complexity=O(n)
//Space Complexity = O(1)
class Solution 
{
public:
void moveZeroes(vector<int>& nums) 
{
    for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++)
    {
        if (nums[cur] != 0) 
        {
            swap(nums[lastNonZeroFoundAt++], nums[cur]);
        }
    }
}
};