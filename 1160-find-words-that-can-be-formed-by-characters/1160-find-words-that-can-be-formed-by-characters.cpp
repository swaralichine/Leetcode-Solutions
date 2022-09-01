//time complexity=O(n)  we are traversing the words and chars once
//space complexity=O(n)  we are using hashmap 
class Solution 
{
public:
    int countCharacters(vector<string>& words, string chars)
    {
        //stroing count of characters in map
        unordered_map<char,int> mp;
        int ans=0;
        
        for(int i=0;i<chars.size();i++)
        {
            mp[chars[i]]++;
        }
        //traversing each word and letter
        for(int i=0;i<words.size();i++)
        {
            //copying the map count into a dummy map
            unordered_map<char,int> dummy=mp;
            bool flag=true;
            for(int j=0;j<words[i].size();j++)
            {
                if(dummy[words[i][j]]==0)   //word is not there in characters
                {
                    flag=false;
                    break;
                }
                else
                {
                    dummy[words[i][j]]--; //reducing the count since we can use the letter only once
                }
            }
            if(flag == true)
            {
                ans=ans+words[i].size();
            }
        }
        return ans;
    }
};