//time complexity=O(n)
//space complexity=O(1)
//using quicksort
//taking two pointers p0,p2
class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int p0=0;
        int p=0;
        int p2=nums.size()-1;
        
        while(p<=p2)
        {
            if(nums[p]==0)
            {
                nums[p]=nums[p0];
                nums[p0]=0;
                p0++;
                p++;
            }
            else if(nums[p]==2)
            {
                nums[p]=nums[p2];
                nums[p2]=2;
                p2--;
            }
            else
            {
                p++;
            }
        }
    }
};