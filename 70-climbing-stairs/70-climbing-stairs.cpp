//Dynamic Programming
class Solution 
{
public:
    int climbStairs(int n) 
    {
        if(n == 1)
        {
            return 1;
        }
        if(n == 2)
        {
            return 2;
        }
        int climb[n+1];
        climb[1]=1;  //1st stair can be climbed in one way only
        climb[2]=2;   //2nd stair can be climbed in two possible ways
        for(int i=3;i<=n;i++)
        {
            climb[i]=climb[i-1]+climb[i-2];   //any stair can be climbed in two possible ways
        }
       return climb[n];       //return the number of ways the last step can be climbed
    }
};