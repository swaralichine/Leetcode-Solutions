//using two pointer approach
//time complexity=O(n)
//space complexity=O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]!=val)
            {
            nums[cnt]=nums[i];
            cnt++;
            }
        }
        return cnt;
    }
};