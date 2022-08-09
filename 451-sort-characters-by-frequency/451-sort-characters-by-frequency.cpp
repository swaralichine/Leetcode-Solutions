class Solution 
{
public:
    //comparision function to pass to sort()
    static bool cmp(pair<char,int>&a, pair<char,int>&b)
    {
        return a.second > b.second;
    }
    
    string frequencySort(string s) 
    {
        string ans = "";
        map <char, int> mp;
        
        for(int i = 0 ; i < s.length(); i++)
            mp[s[i]]++;
        
        vector <pair<char, int>> v;
        
        for(auto i : mp)
            v.push_back(i);
        
        sort(v.begin(), v.end(), cmp);
        
        for(auto i : v)
        {
            while(i.second > 0)
            {
                ans += i.first;
                i.second--;
            }
        }
        
        return ans;
    }
};

