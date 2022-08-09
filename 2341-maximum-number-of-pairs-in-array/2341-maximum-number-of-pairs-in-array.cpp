class Solution 
{
public:
    vector<int> numberOfPairs(vector<int>& nums) 
    {
        //map to store the frequency of the numbers
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        //declare a vector to store the 2 counts
        vector<int> ans(2,0);
        
        for(auto i:mp)
        {
            if(i.second%2 ==0)
            {
                ans[0]=ans[0]+(i.second/2);
            }
            else
            {
                ans[0]=ans[0]+((i.second-1)/2);
                ans[1]++;
            }
        }
        return ans;
    }
};
