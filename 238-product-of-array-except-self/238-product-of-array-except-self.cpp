//Using prefix and suffix array

class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        
        vector<int> left(n,1);  // left stores the product of first i elements from left
        vector<int> right(n,1); //right stores the product of first i elements from right
        
        left[0]=nums[0];
        for(int i=1;i<n;i++)      //fill the left array
        {
            left[i]=left[i-1]*nums[i];
        }
        
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)    //fill the right array
        {
            right[i]=right[i+1]*nums[i];
        }
        
        vector<int> prod(n);
        
        for(int i=0;i<n;i++)
        {
            int left_prod=1;   //product from 0 to i-1
            int right_prod=1;  //product from i+1 to n-1
            
            if(i-1 >=0)
            {
                left_prod=left[i-1];  //storing the values to the left 
            }
            if(i+1<n)
            {
                right_prod=right[i+1];    //storing the values to the right
            }
            
            int product = left_prod*right_prod;   
            prod[i]=product;        //final product for each value
        }
        return prod;
    }
};