//time complexity=O(1)
//space complexity=O(n) for push operation
class MyQueue 
{
public:
    stack<int> s1,s2; //using two stacks because stack follows LIFO and queue follows FIFO. Hence we transfer the elements from st1 to st2 and then pop the top most element from the stack. The top element is popped from s1
    
    MyQueue() 
    {
        
    }
    
    void push(int x) 
    {
        if(s1.empty())
        {
            s1.push(x);
            return;
        }
        //we first move elements to s2 so that the last element is at the top
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        //we again push the elements to s1 so that the latest added element is at the bottom
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() 
    {
        int x=s1.top();
        s1.pop();
        return x;
    }
    
    int peek() 
    {
        return s1.top();
    }
    
    bool empty() 
    {
        return s1.empty();   
    }
};
