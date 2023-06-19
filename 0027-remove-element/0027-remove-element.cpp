
//time complexity=O(n)
//space complexity=O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]!=val)
            {
            nums[ans]=nums[i]; 
            ans++;   //increase the count of the index storing the unmatched values
            }
        }
        return ans;    //return the count of unmatched values
    }
};