class Solution 
{
public:
    int hammingWeight(uint32_t n) 
    {
        int ans=0;
        while(n)
        {
            if(n & 1)  //anding with one
            {
                ans++;
            }
            n = n >> 1;    //right shift
        }
        return ans;
    }
};
