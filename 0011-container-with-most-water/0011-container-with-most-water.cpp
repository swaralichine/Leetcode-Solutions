//Two Pointer Approach
//time complexity=O(n)
//Space complexity=O(1)
class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
       int ans=0;
       int left=0;
       int right=height.size()-1;

       while(left < right)
       {
          int index_diff = right - left;  //these are the indices
          ans = max(ans, min(height[left],height[right])*index_diff);  //logic
           
          if(height[right] > height[left])
          {
              left++;
          }
          else
          {
              right--;
          }
       }
       return ans;
    }
};