//time complexity=O(n)
//space complexity=O(1) we use only two pointers
class Solution
{
public:
    string mergeAlternately(string word1, string word2) 
    {
        int i=0;
        int j=0;
        string ans="";
        while(i<word1.size() && j<word2.size())
        {
            ans=ans+word1[i]+word2[j];
            i++;
            j++;
        }
        if(i<word1.size())
        {
            ans=ans+word1.substr(i);
        }
        if(j<word2.size())
        {
            ans=ans+word2.substr(i);
        }
        return ans;
    }
};