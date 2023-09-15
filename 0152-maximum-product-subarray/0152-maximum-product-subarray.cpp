// We can solve it using dynamic programming. If it was a maximum sum problem, we would have stored the minimum sum seen so far and subtract that from the current sum to get the maximum sum at that index.

// For finding the maximum product, since all the numbers are integer, so we know that the product would be maximum when either we multiply the negative number with a negative number or positive number with a positive number.

// If the negative number comes, then we should swap our maximum productn with minimum, because it will now make the maximum more less. For example, maxi=4 and mini=-2 and nums[i]=-2., then the larger number would now become smaller then smaller number.
//Time Complexity=O(N)
//Space Complexity=O(1)
class Solution 
{
public:
    int maxProduct(vector<int>& nums) 
    {
     int r=nums[0];
     int maxi=r;
     int mini=r;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                //swap logic
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