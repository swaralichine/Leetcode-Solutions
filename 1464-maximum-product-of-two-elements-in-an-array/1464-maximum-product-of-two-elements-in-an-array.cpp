//Using priority queue
class Solution 
{
public:
    int maxProduct(vector<int>& nums) 
    {
        //using priority queue to store the maximum elements at the top
        priority_queue<int> pq;
        for(auto x:nums)
        {
            pq.push(x);
        }
        int num1=pq.top();
        pq.pop();
        
        int num2=pq.top();
        pq.pop();
        
        return (num1-1)*(num2-1);
    }
};


