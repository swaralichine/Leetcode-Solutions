//Binary Search approach
//Time Complexity = O(logn)
//Space Compelxity = O(1)
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int mid,left=0,right=nums.size()-1;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] > target)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return left;
    }
};