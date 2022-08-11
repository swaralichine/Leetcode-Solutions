//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    int minAddToMakeValid(string s)
    {
        int count=0;
        int mini=0;
        for(char c:s)
        {
            if(c=='(')
            {
                count++;
            }
            else if(c==')')
            {
                if(count>0)
                {
                    count--;
                }
                else
                {
                    mini++;
                }
            }
        }
        return mini+count;
    }
};


