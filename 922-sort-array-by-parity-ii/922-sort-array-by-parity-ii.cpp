class Solution 
{
public:
    vector<int> sortArrayByParityII(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> ans(n);   //ans vector same as size of nums
        
        //using two pointer 
        int i=0;   //even nos starting point
        int j=1;   //odd nos starting point
        
        for(int k=0;k<n;k++)
        {
            if(nums[k]%2==0)
            {
                ans[i]=nums[k];
                i+=2;   //to store at even positions only
            }
            else if(nums[k]%2!=0)
            {
                ans[j]=nums[k];
                j+=2;    //to store at odd positions only
            }
        }
        return ans;
    }
};
