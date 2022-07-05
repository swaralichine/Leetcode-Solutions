//Bit Manipulation
/*First we calculate sum of n natural integers by mathematical formula n*(n+1)/2.
Then we calculate sum of all elements in array and store it in variable summ.

Difference of these two will give the required missing number.*/
class Solution 
{
public:
    int missingNumber(vector<int>& nums)
    {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int missingno = 0;
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1=sum1+nums[i];
        }
        missingno=sum-sum1;
        return missingno;
    }
};
