//time complexity=O(s+t) s,t=lengths of strings
//space complexity=O(s+t)
class Solution 
{
public:
    string minWindow(string s, string t) 
    {
        int m=s.size();
        int n=t.size();
        
        unordered_map<char,int>mp;
        
        int ans=INT_MAX;
        int start=0;
        
        for(auto x:t)
        {
            mp[x]++;
        }
        
        int cnt=mp.size();
        int i=0;
        int j=0;
        
        while(j<m)
        {
            //reduce the frequency of elements
            mp[s[j]]--;
            if(mp[s[j]]==0)
            {
                cnt--;
            }
            //if cnt 0 means size of map is 0 which means potential answer found
            if(cnt==0)
            {
                while(cnt==0)
                {
                    //update the minimum length of string
                    if(ans>j-i+1)
                    {
                        ans=min(j-i+1, ans);
                        start=i;
                    }
                    //now reducing the window size and removing extra elements
                    mp[s[i]]++;
                    //if mp[s[i]] > 0 that means size of map will also increase so increase the count as well
                    if(mp[s[i]]>0)
                    {
                        cnt++;
                    }
                    //reduce the window size
                    i++;
                }
            }
//the above while loop is for potential answer now as soon as we loose our potential answer by doing i++ again start increasing the window by j++ for a new potential answer
            j++;
        }
//if ans not equal to int max means ans found so take the substring from start = i and size of substring will be length of ans;
        if (ans != INT_MAX)
            return s.substr(start, ans);
        else
            //otherwise return empty string
            return "";
    }
};