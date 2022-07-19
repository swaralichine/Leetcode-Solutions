//Binary Search Approach
//Time Complexity = O(logn)
//Space Complexity = O(1)
class Solution 
{
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ans(2);
        ans[0]=findstartingindex(nums,target);
        ans[1]=findendingindex(nums,target);
        
        return ans;
    }
    
    public:
    int findstartingindex(vector<int>& nums, int target)
    {
        int index=-1;
        int start=0;
        int end=nums.size()-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid] >= target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            if(nums[mid] == target)
            {
                index=mid;
            }
        }
        return index;
    }
    public :
    int findendingindex(vector<int>& nums, int target)
    {
        int index=-1;
        int start=0;
        int end=nums.size()-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid] <= target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            if(nums[mid] == target)
            {
                index=mid;
            }
        }
        return index;
    }
};