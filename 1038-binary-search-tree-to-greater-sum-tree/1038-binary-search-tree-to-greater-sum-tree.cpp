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
//We folow inorder traversal
//We follow right->root->left order
//By the time we reach left, we must have already added the values greater than the current node values
class Solution 
{
public:
    int val=0;
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        solve(root->right);
        val=val+root->val;
        root->val=val;
        solve(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) 
    {
        solve(root);
        return root;
    }
};
