class OrderedStream 
{
public:
    //declaring a stream
    vector<string> stream;
    int i=0;
    
    OrderedStream(int n) 
    {
        stream.resize(n);
    }
    
    vector<string> insert(int idKey, string value) 
    {
        //declaring vector to store the ans
        vector<string> ans;
        stream[idKey-1]=value; //storing the value of string in the id
        while(i < stream.size() && stream[i] != "")
        {
            ans.push_back(stream[i]);
            i++;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */