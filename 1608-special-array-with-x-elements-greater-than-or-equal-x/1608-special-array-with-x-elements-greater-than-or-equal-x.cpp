//Not an optimsed one
//Time Complexity=O(n*n)
//Space Complexity=O(1)
class Solution 
{
public:
    int specialArray(vector<int>& nums) 
    {
        for(int i=0;i<=nums.size();i++)
        {
            int count=0;
            for(auto j:nums)
            {
                if(j>=i)
                {
                   count++; 
                }
            }
            if(i==count)
            {
                return i;
            }
        }
        return -1;
    }
};




