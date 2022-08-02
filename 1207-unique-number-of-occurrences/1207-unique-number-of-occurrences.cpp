class Solution 
{
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        //declaring map to count the frequency of elements
        map<int,int> mp;
        
        //declaring a vector to store the frequency of elements
        vector<int> count;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        //storing the frequency in the vector
        for(auto x:mp)
        {
            count.push_back(x.second);
        }
        
        sort(count.begin(),count.end());
        
        for(int i=0;i<count.size()-1;i++)
        {
            if(count[i]==count[i+1])
            {
                return false;
            }
        }
        return true;
    }
};


