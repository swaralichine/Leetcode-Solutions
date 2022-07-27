//Time Complexity=O(m+n)
//Space Complexity=O(m+n)
class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int,int> mp1,mp2;
        
        //mark all elements in both arrays
        for(int i:nums1)
        {
            mp1[i]=1;
        }
        for(int i:nums2)
        {
            mp2[i]=1;
        }
        
        vector<int> ans;
        
        for(int i:nums1)
        {
            //check if there are two elements with same value,then remark them with 0 to avoid counting them again
            if(mp1[i]==1 && mp2[i]==1)
            {
                ans.push_back(i);
                mp1[i]=mp2[i]=0;
            }
        }
        return ans;
    }
};
