//time complexity=O(n)
//space complexity=O(1)
//ans[i]=left[i-1]*right[i+1]
//based on prefix sum
class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        
        vector<int> left(n);
        left[0]=1;
        
        vector<int> right(n);
        right[0]=1;

        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]*nums[i-1];
            right[i]=right[i-1]*nums[n-i];
        }
        vector<int> ans(n);
        
        for(int i=0;i<n;i++)
        {
            ans[i]=left[i]*right[n-i-1];
        }
        return ans;
    }
};

