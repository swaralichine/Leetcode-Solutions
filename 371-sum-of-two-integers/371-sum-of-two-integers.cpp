//Time Complexity=O(1)
//Space Complexity=O(1)

class Solution 
{
public:
    int getSum(int a, int b) 
    {
        while(b!=0)
        {
            unsigned c=a&b;
            a=a^b;
            b=c<<1;
        }
        return a;
    }
};
