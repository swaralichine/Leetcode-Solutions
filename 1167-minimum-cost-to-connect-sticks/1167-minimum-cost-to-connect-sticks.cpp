//Time complexity=O(nlogn)
//Space Complexity=O(n)
class Solution 
{
public:
    int connectSticks(vector<int>& sticks) 
    {
        int min_cost_to_connect_sticks=0;
        
        //declaring min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        
        //adding all sticks to the min heap
        for(int i=0;i<sticks.size();i++)
        {
            pq.push(sticks[i]);
        }
        //combining two of the smallest sticks until we are left with one
        while(pq.size()>1)
        {
            int stick1=pq.top();
            pq.pop();
            
            int stick2=pq.top();
            pq.pop();
            
            int cost=stick1+stick2;
            min_cost_to_connect_sticks=min_cost_to_connect_sticks+cost;
            
            //pushing the added cost to the min heap
            pq.push(stick1+stick2);
        }
        return min_cost_to_connect_sticks;
    }
};