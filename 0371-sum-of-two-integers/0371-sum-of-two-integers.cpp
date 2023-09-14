//Time Complexity=O(1)
//Space Complexity=O(1)

class Solution 
{
public:
    int getSum(int a, int b) 
    {
        
        // take b as carry and run the loop till b becomes 0
        
        // (a ^ b) will give sum
        
        // (a & b) << 1 will give carry
        while(b)
        {
        int sum = (a ^ b);
        int carry = (unsigned) (a & b) << 1;
        a=sum;
        b=carry;
        }
        return a;
    }
};

