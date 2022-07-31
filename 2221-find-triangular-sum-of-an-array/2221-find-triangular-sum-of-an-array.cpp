//Using DP
class Solution 
{
public:
    int triangularSum(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>> ans(n,vector<int>(n,0));
        
        //fill the first row as it is
        for(int i=0;i<n;i++)
        {
            ans[0][i]=nums[i];
        }
        
        //start from the second row
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>0)
                {
                    ans[i][j]=(ans[i-1][j-1]+ans[i-1][j])%10;
                }
            }
        }
        return ans[n-1][n-1];
    }
};





