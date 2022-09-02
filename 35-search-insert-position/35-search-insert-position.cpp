//Binary Search approach
//Time Complexity = O(logn)
//Space Compelxity = O(1)
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int left=0;
        int right=nums.size()-1;
        
        while(left <= right)
        {
            int mid=left+(right-left)/2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] > target)   //traversing left hand side
            {
                right=mid-1;
            }
            else     //traversing right hand side
            {
                left=mid+1;
            }
        }
        return left; //returning the position where it should be   
    }
};