class Solution
{
public:
   bool isHappy(int n) 
   {
	// endless loop till we get 1 digit number 
        while(true)
        {
            int rem = 0;
			
			// loop to get the number of exponents per digit
            while(n > 0)
            {
                rem = rem + (n%10) * (n%10);
                n /= 10;
            }
			
			// n gets the result of the digits of the previous number
            n = rem;
			
			// If the number is equal to 1, 7, or 10 from the loop then all the results in the end will be 1
			// so we can return true
            if(n==1||n==7||n==10)
                return true;
				
			// otherwise, if n is already 1 digit and does not satisfy from previous case then we can return false
            else if(n < 10) 
                return false;
        }
    }
};

