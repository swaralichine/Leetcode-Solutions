class Solution 
{
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        priority_queue<pair<double , pair<int,int>>> pq;
        
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                double fraction = (double)arr[i]/arr[j];
                pq.push({fraction,{arr[i],arr[j]}});
                if(pq.size() > k)
                {
                    pq.pop();
                }
            }
        }
        vector<int> ans;
        ans.push_back(pq.top().second.first);
        ans.push_back(pq.top().second.second);
        
        return ans;
    }
};



