//Time Compexity=O(nklogk) (k=max length of string)
//space complexity=O(nk)
class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string,vector<string>> mp;
        int n=strs.size();
        string temp;   //to store the original string
        
        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());  //sort the current string
            mp[strs[i]].push_back(temp);    //storing the key and the sorted                                                       array(key=sorted array)(key->temp)
        }
        vector<vector<string>> ans;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans.push_back(itr->second);   //pushing the original same strings(first is the sorted string)
        }
        return ans;
    }
};