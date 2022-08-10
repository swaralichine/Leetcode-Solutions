class Solution 
{
public:
    int fillCups(vector<int>& amount)
    {
        //using max heap to store the maximum cup at the top
        priority_queue<int> pq;
        
        pq.push(amount[0]);
        pq.push(amount[1]);
        pq.push(amount[2]);
        
        int min_time=0;
        
        while(pq.top()!=0)
        {
            int x=pq.top();
            pq.pop();
            
            int y=pq.top();
            pq.pop();
            
               pq.push(x-1);
               pq.push(y-1);
            
            min_time++;
        }
        return min_time;
    }
};
