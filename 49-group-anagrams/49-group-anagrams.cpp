//Arrays and Hashing
//Sorting the strings and then grouping them 
//Time Complexity = O(nklogk) (n=length of strs, k=max length of string in strs,klogk=sorting each string)
//Space Complexity = O(nk) (Total information stored in answer)
class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> ans;    //storing the final result
        unordered_map<string,vector<string>> mp;   //stroing grouped strings
        string temp;  
        
        for(auto x:strs)
        {
            temp=x;                    //preserving the original string
            sort(x.begin(),x.end());   //sorting each string because all anagrams after sorting                                            will result int the same string
            mp[x].push_back(temp);     //grouping each string according to sorted string
        }
        for(auto x:mp)
        {
            ans.push_back(x.second);    //pushing the anagrams onto the answer vector
        }
        return ans;
    }
};
