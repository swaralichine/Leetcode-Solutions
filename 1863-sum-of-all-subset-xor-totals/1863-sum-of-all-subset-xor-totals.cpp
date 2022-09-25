class Solution 
{
public:
    int solve(vector<int>& nums, int level, int currxor)
    {
        if(level == nums.size())  //reached the end
        {
            return currxor;
        }
        
        int include = solve(nums,level+1,currxor^nums[level]);
        int exclude = solve(nums,level+1,currxor); //self
        
        return include+exclude;
    }
    int subsetXORSum(vector<int>& nums) 
    {
        return solve(nums,0,0);
    }
};

