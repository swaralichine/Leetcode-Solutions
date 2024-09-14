/*Algorithm
Initialize max_val = 0, ans = 0, and current_streak = 0 to track the maximum value, the length of the longest subarray, and the current streak of elements, respectively.
Iterate through each element num in the array nums.
If max_val < num, update max_val to num, and reset ans and current_streak to 0 since a new maximum value is found.
If max_val == num, increment current_streak by 1 because the current element is equal to the maximum value.
If max_val != num, reset current_streak to 0 as the current element breaks the streak of numbers equal to the maximum value.
Update ans to be the maximum of ans and current_streak to ensure ans holds the length of the longest subarray with the maximum value.
After the loop finishes, return ans, which represents the length of the longest subarray where the bitwise AND equals the maximum value.
*/
class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int maxval = 0, ans = 0, currentstreak = 0;
        
        for(int num : nums)
        {
            if(num > maxval)
            {
                maxval = num;
                ans = currentstreak = 0;
            }
            
            if(maxval == num)
            {
                currentstreak ++;
            }
            else
            {
                currentstreak = 0;
            }
            ans = max (ans, currentstreak);
        }
        return ans;
    }
};