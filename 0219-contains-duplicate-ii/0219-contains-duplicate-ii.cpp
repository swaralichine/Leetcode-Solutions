class Solution 
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        int n=nums.size();
        unordered_map<int,int> element;
        for(int i=0;i<n;i++)
        {
            if(element.find(nums[i])!=element.end() && element[nums[i]]>=i-k)
            {
                return true;
            }
            element[nums[i]]=i;
        }
        return false;
    }
};

