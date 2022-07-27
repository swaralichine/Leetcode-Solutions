class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int haystacklen=haystack.length();
        int needlelen=needle.length();
        
        for(int i=0;i<haystacklen-needlelen+1;i++)
        {
            if(needle[0]==haystack[i] && needle==haystack.substr(i,needlelen))
            {
                return i;
            }
        }
        return -1;
    }
};

