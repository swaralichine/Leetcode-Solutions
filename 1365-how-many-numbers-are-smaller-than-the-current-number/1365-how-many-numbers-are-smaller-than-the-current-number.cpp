//Time Complexity=O(n^2) (Can be improved)
class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    v[i]++;
                }
            }
        }
        return v;
    }
};






