//time complexity=O(n)
//space complexity=O(1)
class Solution 
{
public:
    bool confusingNumber(int n) 
    {
        int rotate[10] = {0,1,-1,-1,-1,-1,9,-1,8,6};
        int num=n;
        int rev=0;
        
        while(num)
        {
            int r=num%10;
            if(rotate[r] == -1)
            {
                return false;
            }
            rev=rev*10 + rotate[r];
            num/=10;
        }
        return n!=rev;
    }
};
