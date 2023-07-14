//time complexity=O(log(m+n)) m and n are lengths of the two vectors
//space complexity=O(1)
class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        double ans=0.0;
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        int mid=n/2;
        
        if(n%2==0)
        {
            ans=double(nums1[mid]+nums1[mid-1])/2;
        }
        else
        {
            ans=nums1[mid];
        }
        return ans;
    }
};