//Dynamic Programming
//Time Complexity=O(N)
//Space Complexity=O(1)
class Solution 
{
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxproductsofar=nums[0];
        int minproductsofar=nums[0];
        int maxproductsubarray=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            int currmaxproduct=maxproductsofar*nums[i];
            int currminproduct=minproductsofar*nums[i];
            
            maxproductsofar=max(nums[i],max(currmaxproduct,currminproduct));
            
            minproductsofar=min(nums[i],min(currmaxproduct,currminproduct));
            maxproductsubarray=max(maxproductsubarray,maxproductsofar);
        }
        return maxproductsubarray;
    }
};

