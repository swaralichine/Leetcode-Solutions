class Solution 
{
public:
    string decodeMessage(string key, string message) 
    {
        //using hashmap to store the substitution of the element
        unordered_map<char,char> mp;
        
        int j=0;
        mp[32]=32;
        for(int i=0;i<key.size();i++)
        {
            //if the key is not given a substitution yet
            if(mp.find(key[i]) == mp.end())
            {
                mp[key[i]] = 97 + j;
                j++;
            }
        }
        //declaring a string to store the answer
        string ans;
        
        //decoding the message
        for(int i=0;i<message.size();i++)
        {
            ans.push_back(mp[message[i]]);
        }
        return ans;
    }
};