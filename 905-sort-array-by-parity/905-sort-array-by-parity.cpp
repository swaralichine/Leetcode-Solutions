//time complexity=O(n)
//space complexity=O(1)
//here are 4 cases for (A[i] % 2, A[j] % 2):
//If it is (0, 1), then everything is correct: i++ and j--.
//If it is (1, 0), we swap them so they are correct, then continue.
//If it is (0, 0), only the i place is correct, so we i++ and continue.
//If it is (1, 1), only the j place is correct, so we j-- and continue.

class Solution 
{
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int i=0;
        int j=nums.size()-1;
        
        while(i<j)
        {
            if(nums[i]%2 > nums[j]%2)  //odd element before even element
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            
            //considering normal cases
            if(nums[i]%2==0)
            {
                i++; //even element before odd
            }
            if(nums[j]%2==1)
            {
                j--; //odd element at the last
            }
        }
        return nums;
    }
};