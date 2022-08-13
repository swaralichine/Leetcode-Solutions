class MyStack 
{
public:
    queue<int> q;
    
    MyStack() 
    {
        
    }
    
    void push(int x) 
    {
        q.push(x);
        int n=q.size();
        for(int i=0;i<n-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop()
    {
        int ans=q.front();
        q.pop();
        return ans;
    }
    
    int top() 
    {
        return q.front();
    }
    
    bool empty()
    {
        return q.empty();
    }
};