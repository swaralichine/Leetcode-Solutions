//Using map and minheap
//Time Complexity=O(nlogk)
//Space Compexity=O(n+k)
class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
      //using a map to store the frequency of numbers
        unordered_map<int,int> mp;
        for(auto a:nums)
        {
            //map will have value (number,frequency)
            mp[a]++;
        }
        //creating a min heap in which each value will be a pair of form(frequency,number)
        priority_queue<pair<int,int>, vector<pair<int,int>> ,greater<pair<int,int>>> pq;
        
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            pq.push({i->second,i->first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int> ans;   //final answer vector
        
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};