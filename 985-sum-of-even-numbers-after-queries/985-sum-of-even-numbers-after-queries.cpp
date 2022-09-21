class Solution 
{
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
    {
        int n = nums.size();
        int m = queries.size();
        
        vector<int> ans;
        int sum = 0;
        for(int i = 0; i < n; ++i)
            if((nums[i]&1) == 0)
                sum += nums[i];
        
        for(int i = 0; i < m; ++i)
        {
            if((nums[queries[i][1]]&1) == 0)
                sum -= nums[queries[i][1]];  
            
            nums[queries[i][1]] += queries[i][0];
            
            if((nums[queries[i][1]]&1) == 0)
                sum += nums[queries[i][1]];  
            
            ans.push_back(sum);
        }
        return ans;
    }
};