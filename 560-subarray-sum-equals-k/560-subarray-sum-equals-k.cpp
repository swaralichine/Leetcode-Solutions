//Time Complexity=O(n)
//Space Complexity=O(n)
class Solution 
{
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(n==0)
            return 0;
        
        unordered_map<int,int> mymap;   //Key = PrefixSUM, Value = Count of PrefixSUM.
        int currSUM = 0;
        int i = 0;
        int ans = 0;
        
        while(i<n)
        {
            currSUM += nums[i];
            
            if(currSUM == k)    //We found a new subArray with SUM = k
                ans += 1;
            
            if(mymap.find(currSUM-k)!=mymap.end())
                ans += mymap[currSUM-k];
            
            mymap[currSUM] += 1;
            i += 1;
        }
        return ans;
    }
};