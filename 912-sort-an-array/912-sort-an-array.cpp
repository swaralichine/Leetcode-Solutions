//Using priority queue
class Solution 
{
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        //creating a min heap
        priority_queue<int, vector<int> ,greater<int>> pq;
        for(auto x:nums)
        {
            pq.push(x);
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
