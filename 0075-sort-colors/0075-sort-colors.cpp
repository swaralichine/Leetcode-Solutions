//time complexity=O(n)
//space complexity=O(1)

class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int red = 0, white = 0, blue = 0, n = nums.size();

        //Initialising the count of all three colors in 3 variables
        for(int i =0; i < n ; i++)
        {
            if(nums[i] == 0) 
                red++;
            else if(nums[i] == 1)
                white++;
            else 
                blue++;
        }
        nums.clear(); // clearing the nums

        // inserting the values to nums in sorted order
        for(int i =0 ;i < red; i++)
        {
            nums.emplace_back(0);
        }
        for(int i =0 ;i < white; i++)
        {
            nums.emplace_back(1);
        }
        for(int i =0 ;i < blue; i++)
        {
            nums.emplace_back(2);
        }
    }
};