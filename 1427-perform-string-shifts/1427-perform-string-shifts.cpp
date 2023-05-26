class Solution 
{
public:
    void left(string &s)
    {
        s = s.substr(1,s.length()-1) + s[0];
    }
    void right(string &s)
    {
        s = s[s.length()-1] + s.substr(0,s.length()-1);
    }
    string stringShift(string s, vector<vector<int>>& shift) 
    {
        for(auto shifts:shift)
        {
            int dir = shifts[0];
            int amt = shifts[1];
            
            if(dir==0)
            {
                for(int i=1;i<=amt;i++)
                {
                    left(s);
                }
            }
            else
            {
                for(int i=1;i<=amt;i++)
                {
                    right(s);
                }
            }
        }
        return s;
    }
};