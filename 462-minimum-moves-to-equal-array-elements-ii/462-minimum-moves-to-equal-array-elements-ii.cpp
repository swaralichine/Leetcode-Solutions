//Time Complexity=O(nlogn)
//Space Complexity=O(1)
class Solution 
{
public:
    int minMoves2(vector<int>& nums) 
    {
        int n=nums.size();
        int left=0;
        int right=nums.size();
        int min_moves=0;
        sort(nums.begin(),nums.end());
        int median=nums[n/2];
        for(int i=0;i<n;i++)
        {
            min_moves=min_moves+abs(median-nums[i]);
        }
        return min_moves;
    }
};
