class Solution 
{
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        int no_of_triplets=0;
        for(int i=0;i<nums.size();i++)
        {
            int start=i+1;
            int end=nums.size()-1;
            while(start<end)
            {
                if(nums[start]-nums[i]==diff && nums[end]-nums[start]==diff)
                {
                 no_of_triplets++;
                 break;
                }
                if(nums[start]-nums[i] < diff)
                {
                    start++;
                }
                else if(nums[start]-nums[i] == diff && nums[end] -                           nums[start]>diff)
                {
                    end--;
                }
                else
                {
                    break;
                }
            }
        }
     return no_of_triplets;   
    }
};



