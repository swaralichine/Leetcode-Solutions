//time complexity=O(1)
//space complexity=O(n)
class FreqStack 
{
public:
    
    unordered_map<int,int> freq;
    unordered_map<int,stack<int>> st;
    int max_freq=0;
    
    FreqStack() 
    {
        max_freq=0;
    }
    
    void push(int val)
    {
        freq[val]++;   //increasing the frequency in hashmap
        max_freq=max(max_freq,freq[val]);   //updating the maximum frequency
        st[freq[val]].push(val);   //freq[val] is the key. Hence stack stores the maximum frequent element at the top
    }
    
    int pop()
    {
        int top=st[max_freq].top();   //popping the top frequent element from the stack(referring by key)
        freq[top]--;     //decreasing the frequency
        st[max_freq].pop();
        
        if(st[max_freq].empty())  //all elements have same frequency
        {
            st.erase(max_freq);    
            max_freq--;
        }
        return top;    // we return the top most element on stack by default
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
    

    