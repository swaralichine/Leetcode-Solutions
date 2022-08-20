//time complexity=O(n^2) (can be improved to O(n))
//space complexity=O(1)
class Solution 
{
public:
    long long subArrayRanges(vector<int>& nums) 
    {
        long long ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int min=nums[i];
            int max=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                max=(nums[j]>max) ? nums[j] : max;
                min=(nums[j]<min) ? nums[j] : min;
                ans=ans+(max-min);
            }
        }
        return ans;
    }
};

