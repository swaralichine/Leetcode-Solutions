//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    bool rotateString(string s, string goal) 
    {
        int n=s.size();
        while(n--)
        {
            if(s==goal)
            {
                return true;
            }
            s=s+s[0];
            s.erase(s.begin());
        }
        return false;
    }
};
