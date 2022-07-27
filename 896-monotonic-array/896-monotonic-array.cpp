//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution
{
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int increment=0;
        int decrement=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1] > 0)
            {
                increment++;
            }
            else if(nums[i] - nums[i-1] < 0)
            {
                decrement++;
            }
            if(increment>0 && decrement>0)
            {
                return false;
            }
        }
        return true;
    }
};