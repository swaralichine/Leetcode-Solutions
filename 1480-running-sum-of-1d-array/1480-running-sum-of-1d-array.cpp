
class Solution 
{
public:
    vector<int> runningSum(vector<int> &nums) 
    {
        // Initialize result array with first element in nums.
        vector<int> ans = {nums[0]};

        for (int i = 1; i < nums.size(); i++)
        {
            // Result at index `i` is sum of result at `i-1` and element at `i`.
            ans.push_back(ans.back() + nums[i]);
        }
        return ans;
    }
};