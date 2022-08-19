//time complexity=O(n)
//space complexity=O(1)
class Solution 
{
public:
    int titleToNumber(string columnTitle) 
    {
       int ans=0;
       for(char c:columnTitle)
       {
           int digit=c-'A'+1;
           ans=ans*26+digit;
       }
        return ans;
    }
};

