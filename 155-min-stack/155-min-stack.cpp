//time complexity=O(1)
//space complexity=O(n)

class MinStack 
{
vector<pair<int,int>> v; //to store the element and the minimum element
public:
    MinStack() 
    {
    
    }
    
    void push(int val) 
    {
        if(v.size()==0)
        {
            v.push_back({val,val});
        }
        else
        {
            v.push_back({val,min(val,v[v.size()-1].second)});  //second element is the minimum
        }
    }
    
    void pop() 
    {
        v.pop_back();
    }
    
    int top() 
    {
        return v[v.size()-1].first;
    }
    
    int getMin() 
    {
        return v[v.size()-1].second;
    }
};
