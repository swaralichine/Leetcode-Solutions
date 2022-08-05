class Solution 
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        string s1="";
        string s2="";
        
        int n=(word1.size() > word2.size()) ? word1.size() : word2.size();
        
        for(int i=0;i<n;i++)
        {
            if(i<word1.size())
            {
                s1=s1+word1[i];
            }
            if(i<word2.size())
            {
                s2=s2+word2[i];
            }
        }
        if(s1==s2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};