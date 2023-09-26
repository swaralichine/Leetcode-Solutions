//Valley peak approach
//Time Complexity=O(N)
//Space Complexity=O(1)
class Solution 
{
public:
    bool canJump(vector<int>& nums) 
    {
        int max_reachable=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(max_reachable < i)  //when the pointer has moved ahead
            {
                return false;
            }
            max_reachable = max(max_reachable,nums[i]+i);
        }
        return true;
    }
};