/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//Time Complexity=O(n)
//Space Compexity=O(logn)
class Solution
{
public:
    TreeNode* sortedarraytoBST(vector<int>& nums,int low,int high)
    {
        if(low>high)
        {
            return NULL;
        }
        int mid=(low+high)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=sortedarraytoBST(nums,low,mid-1);
        root->right=sortedarraytoBST(nums,mid+1,high);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        int n=nums.size();
        
        return sortedarraytoBST(nums,0,n-1);
    }
};

