//Time Complexity=O(n^2)
//Space Complexity=O(n)
class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) 
    {
		int good_pairs=0;
		for(int i=0;i<nums.size();i++)
        {
			for(int j=i+1;j<nums.size();j++)
            {
				if(nums[i]==nums[j])
                {
                   good_pairs++;   
                }
			}
		}
		return good_pairs++;
	}
};