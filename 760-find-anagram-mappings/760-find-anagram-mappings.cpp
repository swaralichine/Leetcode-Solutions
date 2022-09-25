//using hashmap
//time complexity=O(n)
//space complexity=O(n)
class Solution 
{
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) 
    {
       vector<int> ans=nums1;
       unordered_map<int,int> mp;
        
       for(int i=0;i<nums2.size();i++)
       {
           mp[nums2[i]]=i;
       }
        for(int i=0;i<nums1.size();i++)
        {
            ans[i]=mp[nums1[i]];  //index of nums1 in map(map stores nums2)
        }
        return ans;
    }
};

