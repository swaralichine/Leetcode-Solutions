//time complexity=O(1)
//space complexity=O(size of queue)
//use queue
class MovingAverage 
{
    queue<int> ans;
    double sum=0;
    int n;
public:
    MovingAverage(int size) 
    {
        this->n=size;
    }
    
    double next(int val) 
    {
        if((int)ans.size()<n)
        {
            ans.push(val);
            sum+=val;
        }
        else
        {
            int lastelement=ans.front();
            ans.pop();
            sum-=lastelement;
            sum+=val;
            ans.push(val);
        }
        return (double)sum/(int)ans.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
