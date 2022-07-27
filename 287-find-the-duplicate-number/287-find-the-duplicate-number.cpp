class Solution 
{
public:
    int findDuplicate(vector<int>& nums)
    {
        vector<int> count(nums.size(),0);
        int num=0;
        
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(count[i]>1)
            {
                num=i;
                break;
            }
        }
        return num;
    }
};
