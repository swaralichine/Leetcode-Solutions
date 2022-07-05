class Solution 
{
public:
    int hammingWeight(uint32_t n) 
    {
        int no_of_one_bits=0;
        for(int i=0;i<=32;i++)
        {
            no_of_one_bits = no_of_one_bits + (n&1);  //one and with one gives 1
            n = n >> 1;    //right shift the last bit
        }
        return no_of_one_bits;
    }
};

//Working flow:

/*when,
i=0    count=1    n=00000000000000000000000000000101
i=1    count=2    n=0000000000000000000000000000010
i=2    count=2    n=000000000000000000000000000001
i=3    count=3    n=00000000000000000000000000000*/