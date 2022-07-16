class Solution 
{
public:
    int subtractProductAndSum(int n) 
    {
        int prod=1;
        int sum=0;
        int rem=0;
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            sum=sum+rem;
            prod=prod*rem;
        }
        return (prod-sum);
    }
};