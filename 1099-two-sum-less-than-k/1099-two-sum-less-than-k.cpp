//Time Complexity = O(nlogn)
//Space Complexity = O(logn) to O(n) (Depends on sorting technique)
class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int answer = -1;
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum < k) {
                answer = max(answer, sum);
                left++;
            } else {
                right--;
            }
        }
        return answer;
    }
};