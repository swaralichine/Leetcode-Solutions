//time complexity=O(n+m) n:no of characters in input string, m: no of characters in banned list
//space complexity=O(n+m)
class Solution
{
public:
    string mostCommonWord(string paragraph, vector<string>& banned) 
    {
        unordered_map<string,int> ban;
        for(int i=0;i<banned.size();i++)
        {
            ban[banned[i]]++;
        }
        
        int max_freq=0;
        string ans="";
        unordered_map<string,int> mp;
        
        for(int i=0;i<paragraph.length();i++)
        {
            string word="";
            
            while(i<paragraph.length() && isalpha(paragraph[i]))
            {
                paragraph[i]=tolower(paragraph[i]);
                word.push_back(paragraph[i]);
                i++;    
            }
            if(ban.find(word)==ban.end() && word!="")
            {
                mp[word]++;
                if(max_freq<mp[word])
                {
                    max_freq=mp[word];
                    ans=word;
                }
            }
        }
        return ans;
    }
};