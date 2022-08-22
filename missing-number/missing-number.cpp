class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
      int n = nums.size();
      int sum = n*(n+1)/2;
        int sum1=0;
      for(int i=0;i<nums.size();i++)
      {
          sum1=sum1+nums[i];
      }
        return sum-sum1;
    }
};