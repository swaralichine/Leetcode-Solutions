//Two pointer technique
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
      int low=0;
        int high=numbers.size()-1;
        while(low<high)
        {
            int sum = numbers[low]+numbers[high];
            if(sum == target)
            {
                return {low+1,high+1};
            }
            else if (sum > target)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        return {-1,-1};
    }
};