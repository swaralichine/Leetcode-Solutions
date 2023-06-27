class Solution 
{
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        priority_queue<pair<int, pair<int,int>>> pq;
         
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int sum=nums1[i]+nums2[j];
                if(pq.size() < k)
                {
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                else if(sum < pq.top().first)   //current sum is less than the element sitting on top
                {
                    pq.pop();
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                else
                {
                    break;
                }
            }
        }
        vector<vector<int>> ans;    //to store pairs
        while(!pq.empty())
        {
            auto x = pq.top().second;    //elements
            pq.pop();
            
            ans.push_back({x.first,x.second});    //store in vector array
        }
        return ans;
    }
};



