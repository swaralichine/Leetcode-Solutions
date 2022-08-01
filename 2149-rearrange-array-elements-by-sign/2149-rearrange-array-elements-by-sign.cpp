//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> ans(nums.size());
        
      //declaring the two pointers
        int i=0;
        int j=1;
        
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]>0)
            {
                ans[i]=nums[k];
                i=i+2;
            }
            else if(nums[k]<0)
            {
                ans[j]=nums[k];;
                j=j+2;
            }
        }
        return ans;
    }
};


