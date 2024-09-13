/*Intuition
we can use a prefix XOR array where each element at index i represents the XOR of all elements from the start of the array to index i. This allows us to compute the XOR for any subarray in constant time

Approach
Compute Prefix XOR Array:
Build a prefix XOR array where prefix[i] holds the XOR of all elements from the start of the array up to index i. This can be done in a single pass through the array.

Answer Queries Using Prefix XOR Array:
For each query (left, right), if left is 0, the result is simply prefix[right].
If left is greater than 0, the result can be obtained by prefix[right] ^ prefix[left - 1]. This works because XORing with prefix[left - 1] effectively removes the elements before left, leaving the XOR of the subarray from left to right.

Complexity
Time complexity:
the total time complexity is O(n+q), where q is the number of queries & n is the size of arr.

Space complexity:
the space complexity is O(n+q). n is the space used to store ans & q is the space for prefix.
*/

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int> ans;
        //Step 1: convert arr into an in-place prefix XOR array
        for(int i = 1;i<arr.size();i++)
        {
            arr[i] = arr[i] ^ arr[i-1];
        }
        
        //Step 2: Resolve each query using the prefix XOR array
        for(const auto& q : queries)
        {
            if(q[0] > 0)
            {
                ans.push_back(arr[q[0]-1] ^ arr[q[1]]);
            }
            else
            {
                ans.push_back(arr[q[1]]);
            }
        }
        return ans;
    }
};