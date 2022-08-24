//time complexity=O(n)
//space complexity=O(1)
class Solution 
{
public:
    vector<int> partitionLabels(string s) 
    {
        vector<int> lastindex(26,-1);
        //storing the last occurence of the alphabet
        for(int i=0;i<s.size();i++)
        {
           lastindex[s[i]-'a']=i;                          
        }
        vector<int> ans;
        
        int start=0;
        int end=0; 
        
        for(int i=0;i<s.size();i++)
        {
           end=max(end,lastindex[s[i]-'a']);
           if(i == end)   //the pointer has also reached the max end means we have traversed the maximum substring with all repeating characters
           {
               ans.emplace_back(i-start+1);
               start=i+1;   //start traversing the new paragraph from start=i+1
           }
        }
        return ans;
    }
};