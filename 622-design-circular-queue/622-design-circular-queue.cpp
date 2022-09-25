//time complexity=O(1)
//space complexity=O(n)
class MyCircularQueue 
{
    int count;
    list<int> Q;
public:
    MyCircularQueue(int k) : count{k}
    {
        
    }
    
    bool enQueue(int value) 
    {
        if(count > Q.size())
        {
            Q.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deQueue() 
    {
        if(!Q.empty())
        {
            Q.pop_front();
            return true;
        }
        return false;
    }
    
    int Front() 
    {
        if(Q.empty())
        {
            return -1;
        }
        return Q.front();
    }
    
    int Rear() 
    {
        if(Q.empty())
        {
            return -1;
        }
        return Q.back();
    }
    
    bool isEmpty() 
    {
        return Q.empty();
    }
    
    bool isFull() 
    {
        return Q.size() == count;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */