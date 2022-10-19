class Solution 
{
public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        //using hashmap to store the frequency of words
        map<string,int> mp;
        
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        //storing the frequency and the string 
        vector<pair<string,int>> v;
        for(auto a:mp)
        {
            v.push_back({a.first,a.second});
        }
        //sort the vector v
        sort(v.begin(),v.end(),comp);
        
        //declaring a vector to store the answer
        vector<string> ans;
        
        //store only top k frequent words
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
    
    static bool comp(pair<string,int>&a, pair<string,int>&b)
    {
        //storing the frequencies of the element
        int x=a.second;
        int y=b.second;
        
        //the second element stored is the frequency
        //if both the strings have the same frequency then we sort them using the lexicographical order
        if(x==y)
        {
            return a.first<=b.first;   //one with smaller name goes first for eg--> a<b
        }
        else
        {
            return x>y;   //one with higher freq goes first
        }
    }
};

        