//time complexity=O(1)
//space complexity=O(n) for push operation
class MyQueue 
{
public:
    stack<int> s1,s2; //using two stacks because stack follows LIFO and queue follows FIFO. Hence we transfer the elements from st1 to st2 and then pop the top most element from the stack. The top element is popped from s2
    
    MyQueue() 
    {
        
    }
    
    void push(int x) 
    {
        s1.push(x);
    }
    
    int pop() 
    {
        int res=peek();
        s2.pop();
        return res;
    }
    
    int peek() 
    {
        if(s2.empty())    //if s2 is empty
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int res=s2.top();
        return res;
    }
    
    bool empty() 
    {
         if(s1.empty())
         {
             return s2.empty();
         }
        return false;
    }
};
