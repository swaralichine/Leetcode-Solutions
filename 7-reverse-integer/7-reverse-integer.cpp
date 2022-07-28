//Time Complexity=O(log(x))
//Space Complexity=O(1)
class Solution 
{
public:
    int reverse(int x) 
    {
        int reverse_int=0;
        while(x != 0)
        {
            int pop=x%10;
            x=x/10;
            
            if(reverse_int > INT_MAX/10 || (reverse_int==INT_MAX/10 && pop >7))
            {
                return 0;
            }
            if(reverse_int < INT_MIN/10 || (reverse_int==INT_MIN/10 && pop < -8))
            {
                return 0;
            }
            reverse_int = reverse_int*10 + pop;
        }
        return reverse_int;
    }
};