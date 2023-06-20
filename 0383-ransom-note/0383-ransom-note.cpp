class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    { 
        map<char,int> count;
        for(char c:ransomNote)
        {
            count[c]++;
        }
        for(char c:magazine)  //subtract the count of letters of ransomnote from mmagazine
        {
            count[c]--;
        }
        for(auto c:count)   //if the count of characters is not zero means not all characters from ransomnote are there in magazine
        {
            if(c.second > 0)
            {
                return false;
            }
        }
        return true;
    }
};
