//Time complexity=O(n)
//Space Complexity=O(1)
//It is an array of odd numbers
//The minimum number of operations is a sum of: (n-1)+(n-3)+(n-5)+...+1
class Solution
{
public:
    int minOperations(int n) 
    {
        int sum=0;
        //compute the sum
        while(n>0)
        {
          sum=sum+(n-1);
            n=n-2;
        }
        return sum;
    }
};