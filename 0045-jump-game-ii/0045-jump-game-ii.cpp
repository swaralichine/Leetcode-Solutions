//Time Complexity=O(n) - Greedy Approach
//Space Complexity=O(1)
class Solution 
{
public:
    int jump(vector<int>& nums) 
    {
        int jumps=0;
        int currentJumpEnd=0;
        int farthest=0;
        
        for(int i=0;i<nums.size()-1;i++)  //no need to go till the last element because we need not jump from there
        {
            // Update the farthest reachable index of this jump.
            farthest=max(farthest,nums[i]+i);
            //if we have come to the end of the current jump,we need to jump
            
             // If we finish the starting range of this jump,
            // Move on to the starting range of the next jump.
            if(i==currentJumpEnd)
            {
                jumps++;
                currentJumpEnd=farthest;
            }
        }
        return jumps;
    }
};