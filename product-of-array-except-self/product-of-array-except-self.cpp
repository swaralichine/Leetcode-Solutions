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
        vector<int> ans;
        
        if(n<1)
        {
            return ans;
        }
        int product=1;
        //we traverse from left to right and find the cumulative multiplication
        for(int i=0;i<nums.size();i++)
        {
            product=product*nums[i];
            ans.push_back(product);
        }
        //traverse from right and update the ans vector
        product=1;
        for(int i=n-1;i>0;i--)
        {
            ans[i]=ans[i-1]*product;
            product=product*nums[i];
        }
        ans[0]=product;   //corner case
        
        return ans;
    }
};