class Solution 
{
public:
    int minimumOperations(vector<int>& nums) 
    {
        set<int> s;  //using sets to store distinct elements
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                s.insert(nums[i]);
            }
        }
        return s.size();
    }
};