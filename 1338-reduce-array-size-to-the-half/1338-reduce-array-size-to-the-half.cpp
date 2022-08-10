class Solution 
{
public:
    int minSetSize(vector<int>& arr) 
    {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        priority_queue<int> pq;
        for(auto i:mp)
        {
            pq.push(i.second);
        }
        
        int ans=0;
        int freq=0;
        while(freq<arr.size()/2)
        {
            freq=freq+pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};