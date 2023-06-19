//Two pointer technique
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;)
        {
          if(nums[i]!=nums[j])
          {
              nums[i+1]=nums[j];
              i++;
              j++;
          }
          else
            j++;
        }
        return i+1;
    }
};