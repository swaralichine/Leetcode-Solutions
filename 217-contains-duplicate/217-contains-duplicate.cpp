//time complexity=O(n)  
//space complexity=O(n)  hashtable is linear
class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> count;
        
        for(auto x:nums)
        {
            count[x]++;
        }
        for(auto x:count)
        {
            if(x.second >=2)   //it means it contains duplicates
            {
                return true;
            }
        }
        return false;
    }
};
