class Solution 
{
public:
    uint32_t reverseBits(uint32_t n) 
    {
        int result=0;
        for(int i=0;i<32;i++)
        {
            result=result<<1;
            if(n&1>0)
            {
                result++;
            }
            n=n>>1;
        }
        return result;
    }
};