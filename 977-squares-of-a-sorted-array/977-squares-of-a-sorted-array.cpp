//Two pointer technique
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> result(nums.size());
        
        int left=0;
        int right=nums.size()-1;
        
        for(int i=right;i>=0;i--)
        {
            int square;
                                                
            if(abs(nums[left]) < abs(nums[right]))
            {
                square=nums[right];
                right--;
            }
            else
            {
                square=nums[left];
                left++;
            }
            result[i]=square*square;
        }
        return result;
    }
};