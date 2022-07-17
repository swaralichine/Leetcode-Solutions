//Time complexity = O(logn)
//Space Complexity = O(1)
class Solution 
{
public:
    bool isPerfectSquare(int num) 
    {
      if(num < 2)
      {
          return 2;
      }
      long left=2,right=num/2,x,guesssquared;
      while(left<=right)
      {
          x=left+(right-left)/2;
          guesssquared=x*x;
          if(guesssquared == num)
          {
              return true;
          }
          else if(guesssquared>num)
          {
              right=x-1;
          }
          else
          {
              left=x+1;
          }
      }
        return false;
    }
};