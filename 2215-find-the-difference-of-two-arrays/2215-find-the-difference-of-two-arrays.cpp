//Using unordered_set
//Time Complexity=O(n)
//Space Complexity=O(n)+O(n)=O(n)

class Solution 
{
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        
        vector<vector<int>> ans(2);
        
        for(int i:s1)
        {
            if(s2.count(i)==0)
            {
                ans[0].push_back(i);
            }
        }
        for(int i:s2)
        {
            if(s1.count(i)==0)
            {
                ans[1].push_back(i);
            }
        }
        return ans;
    }
};



