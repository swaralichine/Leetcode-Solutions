class Solution
{
public:
    int arraySign(vector<int>& nums) 
    {
       int count_neg=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i] == 0)
           {
               return 0;
           }
           if(nums[i] < 0)
           {
               count_neg++;
           }
       }
        if(count_neg%2 == 0)
        {
            return 1;
        }
        return -1;
    }
};
