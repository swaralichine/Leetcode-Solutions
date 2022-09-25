class RecentCounter 
{
public:
    queue<int> q;
    RecentCounter() 
    {
        
    }
    
    int ping(int t)
    {
        q.push(t);
        
        while(q.front() < t-3000)
        {
            q.pop();   //those in the range wont be removed from the queue
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */