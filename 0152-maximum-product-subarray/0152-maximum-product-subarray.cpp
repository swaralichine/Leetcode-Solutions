//Dynamic Programming
//Time Complexity=O(N)
//Space Complexity=O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxi = -1e9;
	    int pref = 1, suff = 1;
        int n = nums.size();
	    for(int i = 0; i < n; i++)
        {
	        if(pref == 0) pref = 1;
	        if(suff == 0) suff = 1;
	        pref *= nums[i];
	        suff *= nums[n - i - 1];
	        maxi = max(maxi, max(pref, suff));
	    }
	    return maxi;
    }
};
