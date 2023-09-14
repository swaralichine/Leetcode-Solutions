class Solution 
{
public:
    int hammingWeight(uint32_t n) 
    {
        int ans = 0;
        while(n)
        {
            if(n & 1)  //anding with one to get the count of ones
            {
                ans+=1;
            }
            n=n>>1; //right shift
        }
        return ans;
    }
};
