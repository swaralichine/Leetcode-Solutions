//Bit manipulation
/*Let dp(i) represent the number of ones in the number i.

dp(i) = dp(i/2) , if i is even
dp(i) = 1 + dp(i-1) , if i is odd
dp(0) = 0 , dp(1) = 1*/
    
class Solution 
{
public:
    vector<int> countBits(int n) 
    {
        if(n == 0)
        {
            return {0};
        }
        vector<int> bits(n+1,0);
        bits[0]=0;
        bits[1]=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2 == 0)
            {
                bits[i] = bits[i/2];
            }
            else
            {
                bits[i] = bits[i-1]+1;
            }
        }
        return bits;
    }
};