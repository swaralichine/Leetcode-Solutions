//time complexity=O(logn)
//space complexity=O(n)
//using min and max heap
class MedianFinder 
{
    priority_queue<int> low;
    priority_queue<int,vector<int>,greater<int>> high;
public:
    MedianFinder() 
    {
        
    }
    
    void addNum(int num) 
    {
        //we first push the lement in the max heap
        low.push(num);
        //we then push it to the min heap
        high.push(low.top());
        low.pop();
        if(low.size()<high.size())
        {
            low.push(high.top());
            high.pop();
        }
    }
    
    double findMedian() 
    {
        return low.size()>high.size() ? low.top() : ((double)low.top()+(double)high.top())/2;
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */