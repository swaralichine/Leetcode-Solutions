//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    int minMoves(vector<int>& nums)
    {
        int min_moves=0;
        int minimum=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            minimum=min(minimum,nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            min_moves=min_moves+nums[i]-minimum;
        }
        return min_moves;
    }
};