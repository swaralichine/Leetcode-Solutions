//time complexity=O(n)  
//space complexity=O(n)  hashtable is linear
class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> ans;
        
        for(auto x:nums)
        {
            ans[x]++;
        }
        
        for(auto x:ans)
        {
           if(x.second >= 2)
           {
               return true;
           }
        }
        return false;
    }
};

       