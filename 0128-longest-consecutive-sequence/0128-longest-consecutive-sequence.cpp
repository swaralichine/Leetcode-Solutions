//time complexity=O(n)
//space complexity=O(n) (using hashtable)
class Solution 
{
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0 || nums.size()==1)
        {
            return nums.size();
        }
        
        map<int,int> mp;  //store count and index
        
        for(int x: nums)
        {
           mp[x]++;
        }
        
        int count=1;   //by default longest sequence
        int maxi=1;
        
        for(auto x:mp)
        {
            auto m=mp.find(x.first+1);
            if(m != mp.end())    //if found
            {
                count++;
            }
            else
            {
                maxi=max(maxi,count);
                count=1;  //again initialize the count to one
            }
        }
        
        return maxi;
    }
};