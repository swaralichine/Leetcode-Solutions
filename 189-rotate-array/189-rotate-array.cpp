//Time Complexity = O(n*k)
//Space Complexity = O(1)
class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        k=k%n;   //if k is greater than n
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};


