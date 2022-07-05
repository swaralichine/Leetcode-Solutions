//Bit Manipulation
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int num=0;
        for(int i=0;i<nums.size();i++)
        {
            num = num^nums[i];
        }
        return num;
    }
};