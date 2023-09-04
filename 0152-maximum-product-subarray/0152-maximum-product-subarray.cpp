//Dynamic Programming
//Time Complexity=O(N)
//Space Complexity=O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int r=nums[0];
     int maxi=r;
     int mini=r;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                int temp=maxi;
                maxi=mini;
                mini=temp;
            }
            maxi=max(nums[i],nums[i]*maxi);
            mini=min(nums[i],nums[i]*mini);
            r=max(r,maxi);
        }
        return r;
    }
};