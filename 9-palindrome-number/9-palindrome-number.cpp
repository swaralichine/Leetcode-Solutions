class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        long int num=x;
        long int rem=0;
        long int rev=0;
        while(num>0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(rev!=x)
        {
            return false;
        }
        return true;
    }
};



