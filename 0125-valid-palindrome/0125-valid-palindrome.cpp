
class Solution 
{
public:
    bool isPalindrome(string s) 
    {
       string ans = "";
        //Making string with all alphanumeric and lower case characters
        for(int i = 0; i < s.length(); i++) 
            {
                if(s[i] >= 65 && s[i] <= 90) 
                {
                    ans += tolower(s[i]);
                }
                else if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))                     {
                    ans += s[i];
                }
            }
        int start=0,end=ans.length()-1;
        while(start<end)    //checking for palindrome
        {
            if(ans[start]!=ans[end])
            {
             return false;   
            }
            start++;
            end--;
        }
        return true;
    }
};