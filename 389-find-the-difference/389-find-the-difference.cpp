class Solution 
{
public:
    char findTheDifference(string s, string t)
    {
        int a=0;
        int b=0;
        for(auto i:s)
        {
            a+=i;
        }
        for(auto i:t)
        {
            b+=i;
        }
        return b-a;
    }
};
