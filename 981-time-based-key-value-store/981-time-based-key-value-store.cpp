//O(M⋅L) M=number of set function calls,L=avg length of key and value strings
//O(NLlogM) N=number of get function calls
class TimeMap 
{
public:
    unordered_map<string, vector<pair<int,string >>> keytimemap;
    TimeMap() 
    {
        
    }
    
    void set(string key, string value, int timestamp) 
    {
        //push (timestamp,value) pair in 'key' bucket.
        keytimemap[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) 
    {
        //if the 'key' does not exist in map we will return empty string
        if(keytimemap.find(key) == keytimemap.end())
        {
            return "";
        }
        if(timestamp < keytimemap[key][0].first)
        {
            return "";
        }
        // Using binary search on the array of pairs.
        int left=0;
        int right=keytimemap[key].size();
        
        while(left<right)
        {
            int mid=(left+right)/2;
            if(keytimemap[key][mid].first <= timestamp)
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }
         // If iterator points to first element it means, no time <= timestamp exists.
        if(right == 0)
        {
            return "";
        }
        return keytimemap[key][right-1].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */