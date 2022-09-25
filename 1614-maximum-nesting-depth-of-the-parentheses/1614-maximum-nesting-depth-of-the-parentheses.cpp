class Solution 
{
public:
    int maxDepth(string s) 
    {
        int max_depth=0;
        int cnt=0;
        
        for(char c:s)
        {
            if(c == '(')
            {
                cnt++;
                max_depth=max(cnt,max_depth);
            }
            else if(c == ')')
            {
                cnt--;
            }
        }
        return max_depth;
    }
};