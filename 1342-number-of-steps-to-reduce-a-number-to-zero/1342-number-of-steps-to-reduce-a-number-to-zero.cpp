//Time Complexity=O(logn)
//Space Complexity=O(1)
class Solution
{
public:
    int numberOfSteps(int num)
    {
        int steps=0;
        while(num!=0)
        {
            if(num%2==0)
            {
                num=num/2;
            }
            else
            {
                num=num-1;
            }
            steps=steps+1;
        }
        return steps;
    }
};