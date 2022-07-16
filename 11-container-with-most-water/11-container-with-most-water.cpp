//Two Pointer Approach
class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
       int max_water=0;
       int left=0;
        int right=height.size()-1;
        while(left < right)
        {
            int width=right-left;
            max_water= max(max_water , min(height[left],height[right]) * width);
            if(height[right] > height[left])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_water;
    }
};
