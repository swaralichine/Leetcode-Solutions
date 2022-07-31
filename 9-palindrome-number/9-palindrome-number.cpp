class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        string s=to_string(x);
        
        int mid=s.length()/2;
        
        for(int i=0,j=s.length()-1;i<mid;i++,j--)
        {
            if(s.at(i) != s.at(j))
            {
                return false;
            }
        }
        return true;
    }
};



