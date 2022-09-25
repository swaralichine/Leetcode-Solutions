//brute force
//time complexity=O(n^2)
class Solution 
{
public:
	int countKDifference(vector<int>& nums, int k) 
    {
		int ans=0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            int num = k+nums[i];
            ans = ans + count(nums.begin()+i,nums.end(),num);
        }
        return ans;
	}
};