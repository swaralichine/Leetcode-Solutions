class Solution
{
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2)
    {
        int sum=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end(),greater<>());
        for(int i=0;i<nums1.size();i++)
        {
            sum=sum+(nums1[i]*nums2[i]);
        }
        return sum;
    }
};