//Two pointers
//Time Complexity=O(n)
//Space Complexity = O(1)
class Solution 
{
public:
void moveZeroes(vector<int>& nums) 
{
   int lastNonZeroFoundAt=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            nums[lastNonZeroFoundAt++]=nums[i];
        }
    }
    for(int i=lastNonZeroFoundAt;i<nums.size();i++)
    {
        nums[i]=0;
    }
 }   
};