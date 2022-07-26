//Binary Search
//Time Complexity=O(logn) (n=number of coins)
//Space Complexity=O(1)
class Solution 
{
public:
    int arrangeCoins(int n) 
    {
        long left=0;
        long right=n;
        //number of rows=k
        long k;
        //total coins in k rows
        long c;
        
        while(left<=right)
        {
            k=left+(right-left)/2;
            
            c=k*(k+1)/2;  //sum of coins
            
            if(c==n)
            {
                return (int)k;
            }
            if(n<c)
            {
                right=k-1;
            }
            else
            {
                left=k+1;
            }
        }
        return (int)right;
    }
};