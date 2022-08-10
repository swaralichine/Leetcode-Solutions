class Solution 
{
public:
    int maximumScore(int a, int b, int c) 
    {
        //creating max heap
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int max_score=0;
        while(pq.size()>1)
        {
            max_score++;
            
            auto x=pq.top();
            pq.pop();
            
            auto y=pq.top();
            pq.pop();
            
            if(x-1 >0)
            {
                pq.push(x-1);
            }
            if(y-1 >0)
            {
                pq.push(y-1);
            }
        }
        return max_score;
    }
};

