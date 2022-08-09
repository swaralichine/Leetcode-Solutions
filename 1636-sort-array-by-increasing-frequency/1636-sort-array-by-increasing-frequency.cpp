class Solution 
{
public:
    static bool comp(pair<int,int> a,pair<int,int>b)
    {
        if(a.second==b.second)  //if the frequency of elements is the same
        {
            return a.first>b.first;  //return the smaller element
        }
        else
        {
            return a.second < b.second;  //return whos frequency is greater
        }
    }
    vector<int> frequencySort(vector<int>& nums) 
    {
        //hashmap to store the frequency of elements
        unordered_map<int,int> mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        //storing the number and its frequency
        vector<pair<int,int>> temp;
        for(auto it:mp)
        {
            //it will store as a pair 
            temp.push_back(it);
        }
        sort(temp.begin(),temp.end(),comp);
        
        //declaring vector to store the answer
        vector<int> ans;
        for(auto x:temp)
        {
            while(x.second)    //while the frequency of elements is not zero
            {
                ans.push_back(x.first);
                x.second--;   //decrease the frequency
            }
        }
        return ans;
    }
};



        