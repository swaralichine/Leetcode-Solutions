//time complexity=O(n)
//space complexity=O(1)
class Solution 
{
public:
    int pivotIndex(vector<int>& nums) 
    {
     int sum=0,leftsum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + nums[i];  //total sum
        }
        for(int i=0;i<nums.size();i++)
        {
            if(leftsum == sum - leftsum - nums[i])    //matching the left sum with the right sum
            {
                return i;    //pivot index found
            }
            leftsum = leftsum + nums[i];   //calculating the leftsum as we move forward
        }
        return -1;    //if we dont find the pivot return -1
    }
};