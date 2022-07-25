//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int total_sum=0;
        
        int max_ending_at=0;
        int min_ending_at=0;
        
        int max_sum=INT_MIN;
        int min_sum=INT_MAX;
        
        for(int x:nums)
        {
            total_sum=total_sum+x;
            
            max_ending_at=max(x,max_ending_at+x);
            max_sum=max(max_sum,max_ending_at);
            
            min_ending_at=min(x,min_ending_at+x);
            min_sum=min(min_sum,min_ending_at);
            
        }
        if(max_sum > 0)
        {
            return max(max_sum,total_sum-min_sum);
        }
           return max_sum;
    }
};