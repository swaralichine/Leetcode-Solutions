class Solution
{
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;  // Create a vector to store the differences between left and right sums
        int leftsum = 0;  // Variable to store the sum of elements on the left side of the current element

        // Calculate the total sum of all elements in the input vector
        for(auto x : nums){
            leftsum += x; 
        }

        int rightsum = 0;  // Variable to store the sum of elements on the right side of the current element

        // Iterate through the input vector to calculate the differences between left and right sums
        for(auto x: nums){
            leftsum -= x;  // Decrease the left sum by the current element
            ans.push_back(abs(leftsum - rightsum));  // Calculate the absolute difference between the left and right sums and store it in the answer vector
            rightsum += x;  // Increase the right sum by the current element
        }
        
        return ans;  // Return the vector containing the differences between left and right sums for each element
    }
};