//Using max heap
class Solution
{
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        //using max-heap so that it will store the closest k elements
        priority_queue<pair<int,int>> pq;
        
        for(int num:arr)
        {
            int diff=abs(num-x);
            pq.push({diff,num});  //storing the diff and the number associated with it
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        //declaring answer vector 
        vector<int> ans;
        
        while(!pq.empty())
        {
            int temp=pq.top().second; //second element is the number(first is                                                                               the difference)
            pq.pop();
            ans.push_back(temp);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};