//Using Two Pointer Approach
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();
        int m=nums2.size();
         
        int i=0;
        int j=0;
        
        int max_dist=0;
        
        while(i<n && j<m)
        {
            if(nums1[i]<=nums2[j])
            {
                max_dist = max(max_dist,j-i);
                j++;   //since we want the maximum distance
            }
            else
            {
                i++;
            }
        }
        return max_dist;
    }
};