//time complexity=O(n^2)
//space complexity=O(1)
class Solution 
{
public:
    string longestPalindrome(string s) 
    {
        //base case
        if(s.length() <=1)
        {
            return s;
        }
        int long_palin=1;
        int n=s.length();
        
        int start=0;
        int end=0;
        
        //Odd length
        for(int i=0;i<n-1;i++)
        {
            int left=i;
            int right=i;
            while(left >=0 && right<n)
            {
                if(s[left]==s[right])
                {
                    left--;
                    right++;
                }
                else
                {
                    break;
                }
            }
            int len=right-left-1;
            if(len > long_palin)
            {
                long_palin=len;
                start=left+1;
                end=right-1;
            }
        }
        //Even length
        for(int i=0;i<n-1;i++)
        {
            int left=i;
            int right=i+1;
            while(left >=0 && right<n)
            {
                if(s[left]==s[right])
                {
                    left--;
                    right++;
                }
                else
                {
                    break;
                }
            }
            int len=right-left-1;
            if(len > long_palin)
            {
                long_palin=len;
                start=left+1;
                end=right-1;
            }
        }
        return s.substr(start,long_palin);
    }
};