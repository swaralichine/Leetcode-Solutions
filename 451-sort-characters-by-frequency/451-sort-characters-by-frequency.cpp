class Solution {
public:
    //comparision function to pass to sort()
    static bool cmp(pair<char,int>&a, pair<char,int>&b){
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        string res = "";
        map <char, int> mp;
        for(int i = 0 ; i < s.length(); i++)
            mp[s[i]]++;
        vector <pair<char, int>> ap;
        for(auto i : mp)
            ap.push_back(i);
        sort(ap.begin(), ap.end(), cmp);
        
        for(auto i : ap){
            while(i.second > 0){
                res += i.first;
                i.second--;
            }
        }
        
        return res;
    }
};

