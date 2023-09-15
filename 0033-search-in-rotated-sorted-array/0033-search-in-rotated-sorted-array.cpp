//Binary Search
//Time Complexity=O(logn)  since we are using binary search
//Space Compexity=O(1)
class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int left=0;
        int right=nums.size()-1;
        
        while(left <= right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>=nums[left])   //search for target in left half
            {
                if(nums[left]<=target && target<nums[mid])
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            else  //search for target right half
            {
                if(nums[mid]<target && target<=nums[right])   
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
        }
        return -1;
    }
};