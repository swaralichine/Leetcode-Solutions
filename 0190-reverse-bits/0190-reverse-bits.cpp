//time complexity=O(1)
//space complexity=O(1)
//number n is traversed from right to left and the again to left counting the number of bits
class Solution 
{
public:
    uint32_t reverseBits(uint32_t n) 
    {
       int ans=0;
        
        for(int i=0;i<32;i++)
        {
            ans = ans << 1;   //shift the ans to left
            
            if(n & 1 > 0)
            {
                ans++; 
            }
            n = n >> 1;  //right shift the number
        }
        return ans;
    }
};

