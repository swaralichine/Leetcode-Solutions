//time complexity=O(nlogn) ( can be improved to O(n))
class Solution 
{
public:
    int thirdMax(vector<int>& nums) 
    {
        //sort in decreasing order
        sort(nums.begin(),nums.end(),greater<int>());
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                count++;
            }
            if(count==3)
            {
               return nums[i];   
            }
        }
        return nums[0];   //size is less than 3
    }
};




